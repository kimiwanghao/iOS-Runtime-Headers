/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKFootprint : NSObject {
    struct { 
        double x0; 
        double x1; 
        double y0; 
        double y1; 
    } _boundingRect;
    double _centerDepth;
    struct VKFootprintConvexHull_struct { 
        int edgeCount; 
        struct VKPoint { 
            double x; 
            double y; 
            double z; 
        } edgeOrigin[6]; 
        struct Matrix<double, 3, 1> { 
            double _e[3]; 
        } edgeNormal[6]; 
    } _convexHull;
    struct VKPoint { 
        double x; 
        double y; 
        double z; 
    } _cornerGroundPoints;
    int _cornerGroundPointsCount;
    struct VKPoint { 
        double x; 
        double y; 
        double z; 
    } _furthestGroundPoint;
    double _maxDepth;
    double _maxDistance;
    double _minDepth;
    double _minDistance;
    struct VKPoint { 
        double x; 
        double y; 
        double z; 
    } _nearestGroundPoint;
}

@property (nonatomic, readonly) struct { double x1; double x2; double x3; double x4; } boundingRect;
@property (nonatomic, readonly) double centerDepth;
@property (nonatomic, readonly) struct VKFootprintConvexHull_struct { int x1; struct VKPoint { double x_2_1_1; double x_2_1_2; double x_2_1_3; } x2[6]; /* Warning: unhandled struct encoding: '{Matrix<double' */ struct x3[6]; void*x4; void*x5; void*x6; void*x7; void*x8; void*x9; void*x10; void*x11; void*x12; void*x13; void*x14; void*x15; void*x16; void*x17; void*x18; void*x19; void*x20; bool x21; void*x22; unsigned char x23; unsigned long x24; out BOOL x25; void*x26; long x27; oneway void*x28; const short x29; int x30; out in void*x31; void*x32; void*x33; void*x34; void*x35; void*x36; void*x37; void*x38; void*x39; unsigned short x40; int x41; void*x42; void*x43; void*x44; long long x45; void*x46; void*x47; void*x48; in void*x49; void*x50; void*x51; void*x52; in double x53; void*x54; const unsigned long long x55; void*x56; void*x57; void*x58; void*x59; void*x60; void*x61; void*x62; void*x63; void*x64; void*x65; void*x66; void*x67; void*x68; void*x69; void*x70; void*x71; void*x72; void*x73; void*x74; void*x75; unsigned char x76; void*x77; unsigned short x78; void*x79; short x80; void*x81; void*x82; void*x83; void*x84; unsigned long x85; int x86; unsigned int x87/* : ? */; const void*x88; const void*x89; void*x90; void*x91; const int x92; void x93; void*x94; void*x95; void*x96; void*x97; const void*x98; void*x99; void*x100; void*x101; out const void*x102; short x103; void*x104; void*x105; const void*x106; float x107; void*x108; const void*x109; in BOOL x110; void*x111; short x112; void*x113; float x114; const void*x115; void*x116; void*x117; void*x118; out const void*x119; void*x120; void*x121; const void*x122; float x123; void*x124; const void*x125; in BOOL x126; void*x127; short x128; void*x129; void*x130; void*x131; void*x132; void*x133; void*x134; BOOL x135; void*x136; bool x137; void*x138; long long x139; void*x140; void*x141; void*x142; void*x143; void*x144; void*x145; int x146; void*x147; void*x148; long x149; int x150; void*x151; void*x152; void*x153; void*x154; in void*x155; void*x156; void*x157; BOOL x158; void*x159; void*x160; double x161; void*x162; out void*x163; void*x164; void*x165; unsigned long x166; int x167; in void*x168; SEL x169; void*x170; void*x171; void*x172; void*x173; void*x174; void*x175; void*x176; void*x177; void*x178; void*x179; void*x180; void*x181; void*x182; void*x183; void*x184; void*x185; void*x186; unsigned char x187; bool x188; void*x189; void*x190; void*x191; void x192; int x193; out const void*x194; void*x195; void*x196; void*x197; void*x198; void*x199; void*x200; void*x201; void*x202; void*x203; void*x204; void*x205; void*x206; void*x207; void*x208; void*x209; void*x210; void*x211; void*x212; void*x213; void*x214; void*x215; void*x216; void*x217; void*x218; void*x219; void*x220; void*x221; void*x222; void*x223; void*x224; void*x225; void*x226; void*x227; void*x228; void*x229; void*x230; void*x231; void*x232; void*x233; void*x234; void*x235; void*x236; void*x237; void*x238; void*x239; void*x240; void*x241; void*x242; void*x243; void*x244; void*x245; void*x246; void*x247; void*x248; void*x249; void*x250; void*x251; void*x252; void*x253; void*x254; void*x255; void*x256; void*x257; void*x258; void*x259; void*x260; void*x261; void*x262; void*x263; void*x264; void*x265; void*x266; void*x267; void*x268; void*x269; void*x270; void*x271; void*x272; void*x273; id x274; void*x275; void*x276; void*x277; void*x278; void*x279; void*x280; void*x281; void*x282; void*x283; void*x284; void*x285; void*x286; void*x287; void*x288; void*x289; void*x290; void*x291; void*x292; void*x293; void*x294; void*x295; void*x296; void*x297; void*x298; void*x299; void*x300; void*x301; void*x302; void*x303; void*x304; void*x305; void*x306; void*x307; void*x308; void*x309; void*x310; void*x311; void*x312; void*x313; void*x314; void*x315; void*x316; void*x317; void*x318; void*x319; void*x320; SEL x321; void*x322; void*x323; void*x324; void*x325; void*x326; void*x327; void*x328; void*x329; void*x330; void*x331; void*x332; long x333; void*x334; void*x335; void*x336; void*x337; void*x338; void*x339; void*x340; void*x341; void*x342; void*x343; void*x344; void*x345; void*x346; void*x347; void*x348; void*x349; void*x350; void*x351; void*x352; void*x353; void*x354; void*x355; void*x356; void*x357; void*x358; void*x359; void*x360; void*x361; void*x362; void*x363; void*x364; void*x365; void*x366; void*x367; void*x368; void*x369; void*x370; void*x371; void*x372; void*x373; void*x374; void*x375; void*x376; void*x377; void*x378; void*x379; void*x380; void*x381; void*x382; void*x383; void*x384; void*x385; void*x386; void*x387; void*x388; void*x389; unsigned short x390; void*x391; void*x392; unsigned int x393; void*x394; out void*x395; void*x396; long x397; void*x398; unsigned short x399; void*x400; void*x401; void*x402; void*x403; unsigned int x404; void*x405; void*x406; void*x407; void*x408; void*x409; void*x410; void*x411; void*x412; void*x413; long x414; void*x415; void*x416; long long x417; void*x418; void*x419; void*x420; void*x421; void*x422; void*x423; void*x424; void*x425; void*x426; void*x427; void*x428; void*x429; BOOL x430; void*x431; out void*x432; void*x433; void*x434; void*x435; void*x436; const void*x437; void*x438; void*x439; short x440; void*x441; short x442; void*x443; void*x444; void*x445; double x446; void*x447; void*x448; void*x449; void*x450; void*x451; void*x452; void*x453; int x454; void*x455; const void*x456; void*x457; void*x458; void*x459; void*x460; in void*x461; short x462; void*x463; int x464; void*x465; void*x466; void*x467; in void*x468; void*x469; void*x470; double x471; void*x472; void*x473; void*x474; long x475; void*x476; out void*x477; in void*x478; void*x479; void*x480; void*x481; void*x482; void*x483; void*x484; short x485; void*x486; void*x487; void*x488; double x489; void*x490; SEL x491; void*x492; SEL x493; void*x494; void*x495; void*x496; void*x497; void*x498; void*x499; void*x500; SEL x501; void*x502; SEL x503; void*x504; void*x505; void*x506; void*x507; void*x508; void*x509; void*x510; void*x511; void*x512; void*x513; void*x514; void*x515; void*x516; void x517; void*x518; void*x519; void*x520; long x521; void*x522; void*x523; void*x524; void*x525; void*x526; void*x527; void*x528; BOOL x529; void*x530; out void*x531; void*x532; void*x533; void*x534; void*x535; void*x536; void*x537; const void*x538; void*x539; void*x540; void*x541; void*x542; void*x543; void*x544; short x545; void*x546; short x547; void*x548; SEL x549; void*x550; SEL x551; void*x552; void*x553; void*x554; const void*x555; out void*x556; void*x557; void*x558; void*x559; void*x560; const void*x561; void*x562; void*x563; void*x564; void*x565; unsigned int x566; void*x567; long doublex568; void*x569; void*x570; void*x571; void*x572; void*x573; short x574; void*x575; void*x576; void*x577; double x578; void*x579; SEL x580; void*x581; SEL x582; void*x583; void*x584; void*x585; void*x586; void*x587; void*x588; void*x589; SEL x590; void*x591; SEL x592; void*x593; void*x594; void*x595; void*x596; void*x597; void x598; void*x599; void*x600; void*x601; long x602; void*x603; void*x604; void*x605; void*x606; void*x607; void*x608; void*x609; void*x610; void*x611; void*x612; void*x613; void*x614; void*x615; void*x616; void*x617; void*x618; void*x619; void*x620; void*x621; short x622; void*x623; short x624; void*x625; SEL x626; void*x627; SEL x628; void*x629; void*x630; void*x631; const void*x632; out void*x633; void*x634; void*x635; void*x636; void*x637; const void*x638; void*x639; void*x640; void*x641; void*x642; unsigned int x643; void*x644; long doublex645; void*x646; void*x647; void*x648; void*x649; void*x650; short x651; void*x652; int x653; void*x654; void*x655; void*x656; in void*x657; void*x658; void*x659; double x660; void*x661; void*x662; void*x663; BOOL x664; void*x665; void*x666; void*x667; void*x668; void*x669; const void*x670; void*x671; void*x672; void*x673; void*x674; void*x675; void*x676; short x677; void*x678; void*x679; void*x680; double x681; void*x682; SEL x683; void*x684; SEL x685; void*x686; void*x687; void*x688; void*x689; void*x690; void*x691; void*x692; SEL x693; void*x694; SEL x695; void*x696; long x697; void*x698; void*x699; void*x700; short x701; void*x702; short x703; void*x704; void*x705; void*x706; void*x707; void*x708; short x709; void*x710; short x711; void*x712; SEL x713; void*x714; SEL x715; void*x716; void*x717; void*x718; const void*x719; out void*x720; void*x721; void*x722; void*x723; void*x724; const void*x725; void*x726; void*x727; void*x728; void*x729; unsigned int x730; void*x731; long doublex732; void*x733; void*x734; void*x735; void*x736; void*x737; void*x738; void*x739; void*x740; void*x741; const void*x742; void*x743; void*x744; void*x745; void*x746; void*x747; void*x748; void*x749; void*x750; void*x751; void*x752; void*x753; void*x754; struct x755; void*x756; void*x757; void*x758; void*x759; void*x760; in void*x761; short x762; void*x763; int x764; void*x765; void*x766; void*x767; in void*x768; void*x769; void*x770; double x771; void*x772; void*x773; void*x774; long x775; void*x776; out void*x777; in void*x778; void*x779; void*x780; void*x781; void*x782; void*x783; void*x784; void*x785; void*x786; void*x787; void*x788; void*x789; void*x790; void*x791; void*x792; void*x793; void*x794; void*x795; void*x796; void*x797; void*x798; void*x799; void*x800; } convexHull; /* unknown property attribute:  1>=[3d]}]} */
@property (nonatomic, readonly) struct VKPoint { double x1; double x2; double x3; }*cornerGroundPoints;
@property (nonatomic, readonly) int cornerGroundPointsCount;
@property (nonatomic, readonly) struct VKPoint { double x1; double x2; double x3; } furthestGroundPoint;
@property (nonatomic, readonly) double maxDepth;
@property (nonatomic, readonly) double minDepth;
@property (nonatomic, readonly) struct VKPoint { double x1; double x2; double x3; } nearestGroundPoint;

- (id).cxx_construct;
- (struct { double x1; double x2; double x3; double x4; })_expandedBoundingRect;
- (id /* block */)annotationCoordinateTest;
- (id /* block */)annotationRectTest;
- (struct { double x1; double x2; double x3; double x4; })boundingRect;
- (double)centerDepth;
- (void)computeFromCamera:(id)arg1;
- (BOOL)containsGroundPoint:(struct VKPoint { double x1; double x2; double x3; }*)arg1;
- (struct VKFootprintConvexHull_struct { int x1; struct VKPoint { double x_2_1_1; double x_2_1_2; double x_2_1_3; } x2[6]; struct Matrix<double, 3, 1> { double x_3_1_1[3]; } x3[6]; })convexHull;
- (struct VKPoint { double x1; double x2; double x3; }*)cornerGroundPoints;
- (int)cornerGroundPointsCount;
- (struct VKPoint { double x1; double x2; double x3; })furthestGroundPoint;
- (double)maxDepth;
- (double)minDepth;
- (struct VKPoint { double x1; double x2; double x3; })nearestGroundPoint;
- (BOOL)rejectsRect:(const struct { double x1; double x2; double x3; double x4; }*)arg1;

@end
