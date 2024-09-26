#include <signal.h>
char **arg;
char  *bp;
struct fc {char c; void (*p)(void);} fpt[256];

#define X(x) void _0x##x(void) { (fpt[*(bp++)].p)(); }

void _0x20(void) {raise(SIGSEGV);}

X(0)  X(1)  X(2)  X(3)  X(4)  X(5)  X(6)  X(7)  X(8)  X(9)  X(a)  X(b)  X(c)  X(d)  X(e)  X(f)
X(10) X(11) X(12) X(13) X(14) X(15) X(16) X(17) X(18) X(19) X(1a) X(1b) X(1c) X(1d) X(1e) X(1f)
      X(21) X(22) X(23) X(24) X(25) X(26) X(27) X(28) X(29) X(2a) X(2b) X(2c) X(2d) X(2e) X(2f)
X(30) X(31) X(32) X(33) X(34) X(35) X(36) X(37) X(38) X(39) X(3a) X(3b) X(3c) X(3d) X(3e) X(3f)
X(40) X(41) X(42) X(43) X(44) X(45) X(46) X(47) X(48) X(49) X(4a) X(4b) X(4c) X(4d) X(4e) X(4f)
X(50) X(51) X(52) X(53) X(54) X(55) X(56) X(57) X(58) X(59) X(5a) X(5b) X(5c) X(5d) X(5e) X(5f)
X(60) X(61) X(62) X(63) X(64) X(65) X(66) X(67) X(68) X(69) X(6a) X(6b) X(6c) X(6d) X(6e) X(6f)
X(70) X(71) X(72) X(73) X(74) X(75) X(76) X(77) X(78) X(79) X(7a) X(7b) X(7c) X(7d) X(7e) X(7f)
X(80) X(81) X(82) X(83) X(84) X(85) X(86) X(87) X(88) X(89) X(8a) X(8b) X(8c) X(8d) X(8e) X(8f)
X(90) X(91) X(92) X(93) X(94) X(95) X(96) X(97) X(98) X(99) X(9a) X(9b) X(9c) X(9d) X(9e) X(9f)
X(a0) X(a1) X(a2) X(a3) X(a4) X(a5) X(a6) X(a7) X(a8) X(a9) X(aa) X(ab) X(ac) X(ad) X(ae) X(af)
X(b0) X(b1) X(b2) X(b3) X(b4) X(b5) X(b6) X(b7) X(b8) X(b9) X(ba) X(bb) X(bc) X(bd) X(be) X(bf)
X(c0) X(c1) X(c2) X(c3) X(c4) X(c5) X(c6) X(c7) X(c8) X(c9) X(ca) X(cb) X(cc) X(cd) X(ce) X(cf)
X(d0) X(d1) X(d2) X(d3) X(d4) X(d5) X(d6) X(d7) X(d8) X(d9) X(da) X(db) X(dc) X(dd) X(de) X(df)
X(e0) X(e1) X(e2) X(e3) X(e4) X(e5) X(e6) X(e7) X(e8) X(e9) X(ea) X(eb) X(ec) X(ed) X(ee) X(ef)
X(f0) X(f1) X(f2) X(f3) X(f4) X(f5) X(f6) X(f7) X(f8) X(f9) X(fa) X(fb) X(fc) X(fd) X(fe) X(ff)

#undef X
#define X(x) {0x##x, _0x##x},

struct fc fpt[256] = {
	{0, _0x20},
	      X(1)  X(2)  X(3)  X(4)  X(5)  X(6)  X(7)  X(8)  X(9)  X(a)  X(b)  X(c)  X(d)  X(e)  X(f)
	X(10) X(11) X(12) X(13) X(14) X(15) X(16) X(17) X(18) X(19) X(1a) X(1b) X(1c) X(1d) X(1e) X(1f)
	X(20) X(21) X(22) X(23) X(24) X(25) X(26) X(27) X(28) X(29) X(2a) X(2b) X(2c) X(2d) X(2e) X(2f)
	X(30) X(31) X(32) X(33) X(34) X(35) X(36) X(37) X(38) X(39) X(3a) X(3b) X(3c) X(3d) X(3e) X(3f)
	X(40) X(41) X(42) X(43) X(44) X(45) X(46) X(47) X(48) X(49) X(4a) X(4b) X(4c) X(4d) X(4e) X(4f)
	X(50) X(51) X(52) X(53) X(54) X(55) X(56) X(57) X(58) X(59) X(5a) X(5b) X(5c) X(5d) X(5e) X(5f)
	X(60) X(61) X(62) X(63) X(64) X(65) X(66) X(67) X(68) X(69) X(6a) X(6b) X(6c) X(6d) X(6e) X(6f)
	X(70) X(71) X(72) X(73) X(74) X(75) X(76) X(77) X(78) X(79) X(7a) X(7b) X(7c) X(7d) X(7e) X(7f)
	X(80) X(81) X(82) X(83) X(84) X(85) X(86) X(87) X(88) X(89) X(8a) X(8b) X(8c) X(8d) X(8e) X(8f)
	X(90) X(91) X(92) X(93) X(94) X(95) X(96) X(97) X(98) X(99) X(9a) X(9b) X(9c) X(9d) X(9e) X(9f)
	X(a0) X(a1) X(a2) X(a3) X(a4) X(a5) X(a6) X(a7) X(a8) X(a9) X(aa) X(ab) X(ac) X(ad) X(ae) X(af)
	X(b0) X(b1) X(b2) X(b3) X(b4) X(b5) X(b6) X(b7) X(b8) X(b9) X(ba) X(bb) X(bc) X(bd) X(be) X(bf)
	X(c0) X(c1) X(c2) X(c3) X(c4) X(c5) X(c6) X(c7) X(c8) X(c9) X(ca) X(cb) X(cc) X(cd) X(ce) X(cf)
	X(d0) X(d1) X(d2) X(d3) X(d4) X(d5) X(d6) X(d7) X(d8) X(d9) X(da) X(db) X(dc) X(dd) X(de) X(df)
	X(e0) X(e1) X(e2) X(e3) X(e4) X(e5) X(e6) X(e7) X(e8) X(e9) X(ea) X(eb) X(ec) X(ed) X(ee) X(ef)
	X(f0) X(f1) X(f2) X(f3) X(f4) X(f5) X(f6) X(f7) X(f8) X(f9) X(fa) X(fb) X(fc) X(fd) X(fe) X(ff)
};

int main (int argc, char **argv) {
	arg = argv;
	arg++;
	*arg;
	bp  = *arg;
	(fpt[*(bp++)].p)();
}
