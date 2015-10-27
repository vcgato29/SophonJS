#include <sophon_types.h>

static const Sophon_U32 uc_id_start_table[] = {
	0x005a0041, 0x007a0061, 0x00aa00aa, 0x00b500b5, 0x00ba00ba, 0x00d600c0, 0x00f600d8, 0x02c100f8,
	0x02d102c6, 0x02e402e0, 0x02ec02ec, 0x02ee02ee, 0x03740370, 0x03770376, 0x037d037a, 0x03860386,
	0x038a0388, 0x038c038c, 0x03a1038e, 0x03f503a3, 0x048103f7, 0x0523048a, 0x05560531, 0x05590559,
	0x05870561, 0x05ea05d0, 0x05f205f0, 0x064a0621, 0x066f066e, 0x06d30671, 0x06d506d5, 0x06e606e5,
	0x06ef06ee, 0x06fc06fa, 0x06ff06ff, 0x07100710, 0x072f0712, 0x07a5074d, 0x07b107b1, 0x07ea07ca,
	0x07f507f4, 0x07fa07fa, 0x09390904, 0x093d093d, 0x09500950, 0x09610958, 0x09720971, 0x097f097b,
	0x098c0985, 0x0990098f, 0x09a80993, 0x09b009aa, 0x09b209b2, 0x09b909b6, 0x09bd09bd, 0x09ce09ce,
	0x09dd09dc, 0x09e109df, 0x09f109f0, 0x0a0a0a05, 0x0a100a0f, 0x0a280a13, 0x0a300a2a, 0x0a330a32,
	0x0a360a35, 0x0a390a38, 0x0a5c0a59, 0x0a5e0a5e, 0x0a740a72, 0x0a8d0a85, 0x0a910a8f, 0x0aa80a93,
	0x0ab00aaa, 0x0ab30ab2, 0x0ab90ab5, 0x0abd0abd, 0x0ad00ad0, 0x0ae10ae0, 0x0b0c0b05, 0x0b100b0f,
	0x0b280b13, 0x0b300b2a, 0x0b330b32, 0x0b390b35, 0x0b3d0b3d, 0x0b5d0b5c, 0x0b610b5f, 0x0b710b71,
	0x0b830b83, 0x0b8a0b85, 0x0b900b8e, 0x0b950b92, 0x0b9a0b99, 0x0b9c0b9c, 0x0b9f0b9e, 0x0ba40ba3,
	0x0baa0ba8, 0x0bb90bae, 0x0bd00bd0, 0x0c0c0c05, 0x0c100c0e, 0x0c280c12, 0x0c330c2a, 0x0c390c35,
	0x0c3d0c3d, 0x0c590c58, 0x0c610c60, 0x0c8c0c85, 0x0c900c8e, 0x0ca80c92, 0x0cb30caa, 0x0cb90cb5,
	0x0cbd0cbd, 0x0cde0cde, 0x0ce10ce0, 0x0d0c0d05, 0x0d100d0e, 0x0d280d12, 0x0d390d2a, 0x0d3d0d3d,
	0x0d610d60, 0x0d7f0d7a, 0x0d960d85, 0x0db10d9a, 0x0dbb0db3, 0x0dbd0dbd, 0x0dc60dc0, 0x0e300e01,
	0x0e330e32, 0x0e460e40, 0x0e820e81, 0x0e840e84, 0x0e880e87, 0x0e8a0e8a, 0x0e8d0e8d, 0x0e970e94,
	0x0e9f0e99, 0x0ea30ea1, 0x0ea50ea5, 0x0ea70ea7, 0x0eab0eaa, 0x0eb00ead, 0x0eb30eb2, 0x0ebd0ebd,
	0x0ec40ec0, 0x0ec60ec6, 0x0edd0edc, 0x0f000f00, 0x0f470f40, 0x0f6c0f49, 0x0f8b0f88, 0x102a1000,
	0x103f103f, 0x10551050, 0x105d105a, 0x10611061, 0x10661065, 0x1070106e, 0x10811075, 0x108e108e,
	0x10c510a0, 0x10fa10d0, 0x10fc10fc, 0x11591100, 0x11a2115f, 0x11f911a8, 0x12481200, 0x124d124a,
	0x12561250, 0x12581258, 0x125d125a, 0x12881260, 0x128d128a, 0x12b01290, 0x12b512b2, 0x12be12b8,
	0x12c012c0, 0x12c512c2, 0x12d612c8, 0x131012d8, 0x13151312, 0x135a1318, 0x138f1380, 0x13f413a0,
	0x166c1401, 0x1676166f, 0x169a1681, 0x16ea16a0, 0x16f016ee, 0x170c1700, 0x1711170e, 0x17311720,
	0x17511740, 0x176c1760, 0x1770176e, 0x17b31780, 0x17d717d7, 0x17dc17dc, 0x18771820, 0x18a81880,
	0x18aa18aa, 0x191c1900, 0x196d1950, 0x19741970, 0x19a91980, 0x19c719c1, 0x1a161a00, 0x1b331b05,
	0x1b4b1b45, 0x1ba01b83, 0x1baf1bae, 0x1c231c00, 0x1c4f1c4d, 0x1c7d1c5a, 0x1dbf1d00, 0x1f151e00,
	0x1f1d1f18, 0x1f451f20, 0x1f4d1f48, 0x1f571f50, 0x1f591f59, 0x1f5b1f5b, 0x1f5d1f5d, 0x1f7d1f5f,
	0x1fb41f80, 0x1fbc1fb6, 0x1fbe1fbe, 0x1fc41fc2, 0x1fcc1fc6, 0x1fd31fd0, 0x1fdb1fd6, 0x1fec1fe0,
	0x1ff41ff2, 0x1ffc1ff6, 0x20712071, 0x207f207f, 0x20942090, 0x21022102, 0x21072107, 0x2113210a,
	0x21152115, 0x211d2119, 0x21242124, 0x21262126, 0x21282128, 0x212d212a, 0x2139212f, 0x213f213c,
	0x21492145, 0x214e214e, 0x21882160, 0x2c2e2c00, 0x2c5e2c30, 0x2c6f2c60, 0x2c7d2c71, 0x2ce42c80,
	0x2d252d00, 0x2d652d30, 0x2d6f2d6f, 0x2d962d80, 0x2da62da0, 0x2dae2da8, 0x2db62db0, 0x2dbe2db8,
	0x2dc62dc0, 0x2dce2dc8, 0x2dd62dd0, 0x2dde2dd8, 0x2e2f2e2f, 0x30073005, 0x30293021, 0x30353031,
	0x303c3038, 0x30963041, 0x309f309d, 0x30fa30a1, 0x30ff30fc, 0x312d3105, 0x318e3131, 0x31b731a0,
	0x31ff31f0, 0x34003400, 0x4db54db5, 0x4e004e00, 0x9fc39fc3, 0xa48ca000, 0xa60ca500, 0xa61fa610,
	0xa62ba62a, 0xa65fa640, 0xa66ea662, 0xa697a67f, 0xa71fa717, 0xa788a722, 0xa78ca78b, 0xa801a7fb,
	0xa805a803, 0xa80aa807, 0xa822a80c, 0xa873a840, 0xa8b3a882, 0xa925a90a, 0xa946a930, 0xaa28aa00,
	0xaa42aa40, 0xaa4baa44, 0xac00ac00, 0xd7a3d7a3, 0xfa2df900, 0xfa6afa30, 0xfad9fa70, 0xfb06fb00,
	0xfb17fb13, 0xfb1dfb1d, 0xfb28fb1f, 0xfb36fb2a, 0xfb3cfb38, 0xfb3efb3e, 0xfb41fb40, 0xfb44fb43,
	0xfbb1fb46, 0xfd3dfbd3, 0xfd8ffd50, 0xfdc7fd92, 0xfdfbfdf0, 0xfe74fe70, 0xfefcfe76, 0xff3aff21,
	0xff5aff41, 0xffbeff66, 0xffc7ffc2, 0xffcfffca, 0xffd7ffd2, 0xffdcffda
};