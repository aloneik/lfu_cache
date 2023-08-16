#include <iostream>

#include <vector>
#include <unordered_map>

struct CountValuePair {
    int value;
    std::size_t use_count;
};

class LFUCache {
private:
    using Map = std::unordered_map<int, CountValuePair>;
    using MapIter = Map::iterator;

public:
    LFUCache(int capacity) {
        recently_used_elements = std::vector<int>{};
        map_ = Map{};
        this->capacity = capacity;
    }
    
    int get(int key) {
        push_key_forward(key);

        // check if key exists
        if (is_key_exists(key)) {
            // if yes: return value
            return get_element(key);           
        }

        return -1;
    }
    
    void put(int key, int value) {
        // check if key exists
        if (is_key_exists(key)) {
            // if yes: update value and stop
            set_element(key, value);
            push_key_forward(key);
            return;
        }
        // check if capacity is exceeded
        if (is_capacity_exceeded()) {
            // if yes: remove least frequently used element
            remove_lfu_element();
        }
        // insert new one
        insert_element(key, value);
        push_key_forward(key);
    }

private:
    int capacity = 0;
    std::vector<int> recently_used_elements;
    Map map_;

    bool is_key_exists(const int key) const {
        return map_.find(key) != map_.end();
    }

    void push_key_forward(const int key) {
        auto key_it = std::find(recently_used_elements.cbegin(), recently_used_elements.cend(), key);
        if (key_it != recently_used_elements.cend()) {
            recently_used_elements.erase(key_it);
        }
        recently_used_elements.push_back(key);
    }

    int get_element(const int key) {
        auto& value_count = map_[key];
        value_count.use_count += 1;
        return value_count.value;
    }

    void insert_element(const int key, const int value) {
        map_[key] = CountValuePair{ value, 1u };
        recently_used_elements.push_back(key);
    }

    void set_element(const int key, const int value) {
        auto& current_value = map_[key];
        current_value.value = value;
        current_value.use_count += 1;
    }

    bool is_capacity_exceeded() const noexcept{
        return map_.size() >= capacity;
    }

    void remove_lfu_element() {
        auto least_used_items = find_least_used_items(map_.begin(), map_.end());

        if (least_used_items.size() == 1) {
            map_.erase(least_used_items[0]);
            return;
        }

        for (auto used_key: recently_used_elements)
        {
            for (auto least_used_item: least_used_items) {
                if (used_key == least_used_item->first) {
                    map_.erase(least_used_item);
                    return;
                }
            }
        }
    }

    std::vector<MapIter> find_least_used_items(MapIter begin, MapIter end){
        auto min = begin->second.use_count;
        std::vector<MapIter> min_elements{};
        min_elements.push_back(begin);
        for (++begin; begin != end; ++begin) {
            if (begin->second.use_count < min) {
                min = begin->second.use_count;
                min_elements.clear();
                min_elements.push_back(begin);
            } else if (begin->second.use_count == min) {
                min_elements.push_back(begin);
            }
        }
        return min_elements;
    }
};

/**
 * Your LFUCache object will be instantiated and called as such:
 * LFUCache* obj = new LFUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */

int main() {
    std::cout << "Hello World!" << std::endl;
}