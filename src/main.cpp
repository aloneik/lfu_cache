#include <iostream>
#include "lfu_cache.hpp"

int main() {
    //LFUCache* obj = new LFUCache{2};
    LFUCache obj{105};
    obj.put(33, 219);
    obj.get(39);
    obj.put(96, 56);
    obj.get(129);
    obj.get(115);
    obj.get(112);
    obj.put(3, 280);
    obj.get(40);
    obj.put(85, 193);
    obj.put(10, 10);
    obj.put(100, 136);
    obj.put(12, 66);
    obj.put(81, 261);
    obj.put(33, 58);
    obj.get(3);
    obj.put(121, 308);
    obj.put(129, 263);
    obj.get(105);
    obj.put(104, 38);
    obj.put(65, 85);
    obj.put(3, 141);
    obj.put(29, 30);
    obj.put(80, 191);
    obj.put(52, 191);
    obj.put(8, 300);
    obj.get(136);
    obj.put(48, 261);
    obj.put(3, 193);
    obj.put(133, 193);
    obj.put(60, 183);
    obj.put(128, 148);
    obj.put(52, 176);
    obj.get(48);
    obj.put(48, 119);
    obj.put(10, 241);
    obj.get(124);
    obj.put(130, 127);
    obj.get(61);
    obj.put(124, 27);
    obj.get(94);
    obj.put(29, 304);
    obj.put(102, 314);
    obj.get(110);
    obj.put(23, 49);
    obj.put(134, 12);
    obj.put(55, 90);
    obj.get(14);
    obj.get(104);
    obj.put(77, 165);
    obj.put(60, 160);
    obj.get(117);
    obj.put(58, 30);
    obj.get(54);
    obj.get(136);
    obj.get(128);
    obj.get(131);
    obj.put(48, 114);
    obj.get(136);
    obj.put(46, 51);
    obj.put(129, 291);
    obj.put(96, 207);
    obj.get(131);
    obj.put(89, 153);
    obj.put(120, 154);
    obj.get(111);
    obj.get(47);
    obj.get(5);
    obj.put(114, 157);
    obj.put(57, 82);
    obj.put(113, 106);
    obj.put(74, 208);
    obj.get(56);
    obj.get(59);
    obj.get(100);
    obj.get(132);
    obj.put(127, 202);
    obj.get(75);
    obj.put(102, 147);
    obj.get(37);
    obj.put(53, 79);
    obj.put(119, 220);
    obj.get(47);
    obj.get(101);
    obj.get(89);
    obj.get(20);
    obj.get(93);
    obj.get(7);
    obj.put(48, 109);
    obj.put(71, 146);
    obj.get(43);
    obj.get(122);
    obj.put(3, 160);
    obj.get(17);
    obj.put(80, 22);
    obj.put(80, 272);
    obj.get(75);
    obj.get(117);
    obj.put(76, 204);
    obj.put(74, 141);
    obj.put(107, 93);
    obj.put(34, 280);
    obj.put(31, 94);
    obj.get(132);
    obj.put(71, 258);
    obj.get(61);
    obj.get(60);
    obj.put(69, 272);
    obj.get(46);
    obj.put(42, 264);
    obj.put(87, 126);
    obj.put(107, 236);
    obj.put(131, 218);
    obj.get(79);
    obj.put(41, 71);
    obj.put(94, 111);
    obj.put(19, 124);
    obj.put(52, 70);
    obj.get(131);
    obj.get(103);
    obj.get(81);
    obj.get(126);
    obj.put(61, 279);
    obj.put(37, 100);
    obj.get(95);
    obj.get(54);
    obj.put(59, 136);
    obj.put(101, 219);
    obj.put(15, 248);
    obj.put(37, 91);
    obj.put(11, 174);
    obj.put(99, 65);
    obj.put(105, 249);
    obj.get(85);
    obj.put(108, 287);
    obj.put(96, 4);
    obj.get(70);
    obj.get(24);
    obj.put(52, 206);
    obj.put(59, 306);
    obj.put(18, 296);
    obj.put(79, 95);
    obj.put(50, 131);
    obj.put(3, 161);
    obj.put(2, 229);
    obj.put(39, 183);
    obj.put(90, 225);
    obj.put(75, 23);
    obj.put(136, 280);
    obj.get(119);
    obj.put(81, 272);
    obj.get(106);
    obj.get(106);
    obj.get(70);
    obj.put(73, 60);
    obj.put(19, 250);
    obj.put(82, 291);
    obj.put(117, 53);
    obj.put(16, 176);
    obj.get(40);
    obj.put(7, 70);
    obj.put(135, 212);
    obj.get(59);
    obj.put(81, 201);
    obj.put(75, 305);
    obj.get(101);
    obj.put(8, 250);
    obj.get(38);
    obj.put(28, 220);
    obj.get(21);
    obj.put(105, 266);
    obj.get(105);
    obj.get(85);
    obj.get(55);
    obj.get(6);
    obj.put(78, 83);
    obj.get(126);
    obj.get(102);
    obj.get(66);
    obj.put(61, 42);
    obj.put(127, 35);
    obj.put(117, 105);
    obj.get(128);
    obj.get(102);
    obj.get(50);
    obj.put(24, 133);
    obj.put(40, 178);
    obj.put(78, 157);
    obj.put(71, 22);
    obj.get(25);
    obj.get(82);
    obj.get(129);
    obj.put(126, 12);
    obj.get(45);
    obj.get(40);
    obj.get(86);
    obj.get(100);
    obj.put(30, 110);
    obj.get(49);
    obj.put(47, 185);
    obj.put(123, 101);
    obj.get(102);
    obj.get(5);
    obj.put(40, 267);
    obj.put(48, 155);
    obj.get(108);
    obj.get(45);
    obj.put(14, 182);
    obj.put(20, 117);
    obj.put(43, 124);
    obj.get(38);
    obj.put(77, 158);
    obj.get(111);
    obj.get(39);
    obj.put(69, 126);
    obj.put(113, 199);
    obj.put(21, 216);
    obj.get(11);
    obj.put(117, 207);
    obj.get(30);
    obj.put(97, 84);
    obj.get(109);
    obj.put(99, 218);
    obj.get(109);
    obj.put(113, 1);
    obj.get(62);
    obj.put(49, 89);
    obj.put(53, 311);
    obj.get(126);
    obj.put(32, 153);
    obj.put(14, 296);
    obj.get(22);
    obj.put(14, 225);
    obj.get(49);
    obj.get(75);
    obj.put(61, 241);
    obj.get(7);
    obj.get(6);
    obj.get(31);
    obj.put(75, 15);
    obj.get(115);
    obj.put(84, 181);
    obj.put(125, 111);
    obj.put(105, 94);
    obj.put(48, 294);
    obj.get(106);
    obj.get(61);
    obj.put(53, 190);
    obj.get(16);
    obj.put(12, 252);
    obj.get(28);
    obj.put(111, 122);
    obj.get(122);
    obj.put(10, 21);
    obj.get(59);
    obj.get(72);
    obj.get(39);
    obj.get(6);
    obj.get(126);
    obj.put(131, 177);
    obj.put(105, 253);
    obj.get(26);
    obj.put(43, 311);
    obj.get(79);
    obj.put(91, 32);
    obj.put(7, 141);
    obj.get(38);
    obj.get(13);
    obj.put(79, 135);
    obj.get(43);
    obj.get(94);
    obj.put(80, 182);
    obj.get(53);
    obj.put(120, 309);
    obj.put(3, 109);
    obj.get(97);
    obj.put(9, 128);
    obj.put(114, 121);
    obj.get(56);
    obj.get(56);
    obj.put(124, 86);
    obj.put(34, 145);
    obj.get(131);
    obj.get(78);
    obj.put(86, 21);
    obj.get(98);
    obj.put(115, 164);
    obj.put(47, 225);
    obj.get(95);
    obj.put(89, 55);
    obj.put(26, 134);
    obj.put(8, 15);
    obj.get(11);
    obj.put(84, 276);
    obj.put(81, 67);
    obj.get(46);
    obj.get(39);
    obj.get(92);
    obj.get(96);
    obj.put(89, 51);
    obj.put(136, 240);
    obj.get(45);
    obj.get(27);
    obj.put(24, 209);
    obj.put(82, 145);
    obj.get(10);
    obj.put(104, 225);
    obj.put(120, 203);
    obj.put(121, 108);
    obj.put(11, 47);
    obj.get(89);
    obj.put(80, 66);
    obj.get(16);
    obj.put(95, 101);
    obj.get(49);
    obj.get(1);
    obj.put(77, 184);
    obj.get(27);
    obj.put(74, 313);
    obj.put(14, 118);
    obj.get(16);
    obj.get(74);
    obj.put(88, 251);
    obj.get(124);
    obj.put(58, 101);
    obj.put(42, 81);
    obj.get(2);
    obj.put(133, 101);
    obj.get(16);
    obj.put(1, 254);
    obj.put(25, 167);
    obj.put(53, 56);
    obj.put(73, 198);
    obj.get(48);
    obj.get(30);
    obj.get(95);
    obj.put(90, 102);
    obj.put(92, 56);
    obj.put(2, 130);
    obj.put(52, 11);
    obj.get(9);
    obj.get(23);
    obj.put(53, 275);
    obj.put(23, 258);
    obj.get(57);
    obj.put(136, 183);
    obj.put(75, 265);
    obj.get(85);
    obj.put(68, 274);
    obj.put(15, 255);
    obj.get(85);
    obj.put(33, 314);
    obj.put(101, 223);
    obj.put(39, 248);
    obj.put(18, 261);
    obj.put(37, 160);
    obj.get(112);
    obj.get(65);
    obj.put(31, 240);
    obj.put(40, 295);
    obj.put(99, 231);
    obj.get(123);
    obj.put(34, 43);
    obj.get(87);
    obj.get(80);
    obj.put(47, 279);
    obj.put(89, 299);
    obj.get(72);
    obj.put(26, 277);
    obj.put(92, 13);
    obj.put(46, 92);
    obj.put(67, 163);
    obj.put(85, 184);
    obj.get(38);
    obj.put(35, 65);
    obj.get(70);
    obj.get(81);
    obj.put(40, 65);
    obj.get(80);
    obj.put(80, 23);
    obj.put(76, 258);
    obj.get(69);
    obj.get(133);
    obj.put(123, 196);
    obj.put(119, 212);
    obj.put(13, 150);
    obj.put(22, 52);
    obj.put(20, 105);
    obj.put(61, 233);
    obj.get(97);
    obj.put(128, 307);
    obj.get(85);
    obj.get(80);
    obj.get(73);
    obj.get(30);
    obj.put(46, 44);
    obj.get(95);
    obj.put(121, 211);
    obj.put(48, 307);
    obj.get(2);
    obj.put(27, 166);
    obj.get(50);
    obj.put(75, 41);
    obj.put(101, 105);
    obj.get(2);
    obj.put(110, 121);
    obj.put(32, 88);
    obj.put(75, 84);
    obj.put(30, 165);
    obj.put(41, 142);
    obj.put(128, 102);
    obj.put(105, 90);
    obj.put(86, 68);
    obj.put(13, 292);
    obj.put(83, 63);
    obj.put(5, 239);
    obj.get(5);
    obj.put(68, 204);
    obj.get(127);
    obj.put(42, 137);
    obj.get(93);
    obj.put(90, 258);
    obj.put(40, 275);
    obj.put(7, 96);
    obj.get(108);
    obj.put(104, 91);
    obj.get(63);
    obj.get(31);
    obj.put(31, 89);
    obj.get(74);
    obj.get(81);
    obj.put(126, 148);
    obj.get(107);
    obj.put(13, 28);
    obj.put(21, 139);
    obj.get(114);
    obj.get(5);
    obj.get(89);
    obj.get(133);
    obj.get(20);
    obj.put(96, 135);
    obj.put(86, 100);
    obj.put(83, 75);
    obj.get(14);
    obj.put(26, 195);
    obj.get(37);
    obj.put(1, 287);
    obj.get(79);
    obj.get(15);
    obj.get(6);
    obj.put(68, 11);
    obj.get(52);
    obj.put(124, 80);
    obj.put(123, 277);
    obj.put(99, 281);
    obj.get(133);
    obj.get(90);
    obj.get(45);
    obj.get(127);
    obj.put(9, 68);
    obj.put(123, 6);
    obj.put(124, 251);
    obj.put(130, 191);
    obj.put(23, 174);
    obj.put(69, 295);
    obj.get(32);
    obj.get(37);
    obj.put(1, 64);
    obj.put(48, 116);
    obj.get(68);
    obj.put(117, 173);
    obj.put(16, 89);
    obj.get(84);
    obj.put(28, 234);
    obj.get(129);
    obj.get(89);
    obj.get(55);
    obj.get(83);
    obj.put(99, 264);
    obj.get(129);
    obj.get(84);
    obj.get(14);
    obj.put(26, 274);
    obj.get(109);
    obj.get(110);
    obj.put(96, 120);
    obj.put(128, 207);
    obj.get(12);
    obj.put(99, 233);
    obj.put(20, 305);
    obj.put(26, 24);
    obj.put(102, 32);
    obj.get(82);
    obj.put(16, 30);
    obj.put(5, 244);
    obj.get(130);
    obj.put(109, 36);
    obj.put(134, 162);
    obj.put(13, 165);
    obj.put(45, 235);
    obj.put(112, 80);
    obj.get(6);
    obj.put(34, 98);
    obj.put(64, 250);
    obj.put(18, 237);
    obj.put(72, 21);
    obj.put(42, 105);
    obj.put(57, 108);
    obj.put(28, 229);
    obj.get(83);
    obj.put(1, 34);
    obj.put(93, 151);
    obj.put(132, 94);
    obj.put(18, 24);
    obj.put(57, 68);
    obj.put(42, 137);
    obj.get(35);
    obj.get(80);
    obj.put(10, 288);
    obj.get(21);
}