#include <data.h>

namespace efc {

std::string seasonsNames[4] = {"spring", "summer", "fall", "winter"};

// This array defines fields occupied by the river
int terrainArray[24] = {
    8, 24, 40, 56, 72, 88,
    113, 114, 115, 116, 117, 118,
    138, 139, 140, 141, 142, 143,
    167, 183, 199, 215, 231, 247
};
/*
 * 0
 * 16
 * 32
 * 48
 * 64
 * 80
 * 96
 * 112
 * 128
 * 144
 * 160
 * 176
 * 192
 */
std::array<std::array<int,2>,256> boards = {
    {
        {-1,1},   {0,2},     {1,3},      {2,4},     {3,5},     {4,21},     {-1,-1},   {-1,-1},   {-1,-1},    {-1,-1},    {11,26},       {12,10},    {13,11}, 	 {14,12},    {15,13},   {-1,14},
        {-1,-1}, {18,33},   {19,17},    {20,18},   {21,19},   {5,20},     {-1,-1},   {-1,-1},   {-1,-1},    {-1,-1},    {10, 27,},     {26,28},    {27,29}, 	 {28,30},    {29,46},   {-1,-1},
        {33,48}, {17,32},   {-1,-1},    {51,36},   {35,37},   {36,38},    {37,54},   {-1,-1},   {-1,-1},    {-1,-1},    {43,58},       {44,42},    {60,43}, 	 {-1,-1},    {30,47},   {46,63},
        {32,49}, {48,50},   {49,51},    {50,35},   {-1,-1},   {54,69},    {38,53},   {-1,-1},   {-1,-1},    {58,73},    {42,57},       {-1,-1},    {61,44}, 	 {62,60},    {63,61},   {47,62},
        {65,80}, {66,64},   {67,65},    {68,66},   {69,67},   {53,68},    {-1,-1},   {-1,-1},   {-1,-1},    {57,74},    {73,75},       {74,76},    {75,77}, 	 {76,78},    {77,79},   {78,95},
        {64,81}, {80,97},   {-1,-1},    {99,84},   {83,85},   {84,101},   {-1,-1},   {-1,-1},   {-1,-1},    {90,105},   {91,89},       {92,90},    {108,91},	 {-1,-1},    {95,110},  {79,94},
        {-1,-1}, {81,98},   {97,99},    {98,83},   {-1,-1},   {85,102},   {101,118}, {-1,-1},   {105,120},  {89,104},   {-1,-1},       {-1,-1},    {109,92},	 {110,108},  {94,109},  {-1,-1},
        {-1,-1}, {-1,-1},   {-1,-1},    {-1,-1},   {-1,-1},   {-1,-1},    {102, 119},{118,-1},  {104,-1},   {-1,-1},    {-1,-1},       {-1,-1},    {-1,-1},	 {-1,-1},    {-1,-1},   {-1,-1},
        {-1,-1}, {-1,-1},    {-1,-1},   {-1,-1},   {-1,-1},   {-1,-1},    {-1,-1} ,  {151,-1},  {137,-1},    {153,136},	{-1,-1},       {-1,-1},    {-1,-1}, 	 {-1,-1},    {-1,-1},   {-1,-1},
        {-1,-1},  {161,146}, {145,147}, {146,163}, {-1,-1},   {-1,-1},    {166,151}, {150,135} ,{-1,-1},    {154,137},	{170,153},       {-1,-1},    {157,172},	 {158,156},  {174,157}, {-1,-1},
        {176,161},{160,145}, {-1,-1},   {147,164}, {163,165}, {164,166},  {165,150}, {-1,-1},   {-1,-1},    {-1,-1},	{171,154},     {172,170},  {156,171},	 {-1,-1},    {175,158}, {191,174},
        {177,160},{178,176}, {179,177}, {180,178}, {181,179}, {182,180},  {198,181}, {-1,-1},   {-1,-1},    {-1,-1},	{202,187},     {186,188},  {187,189}, 	 {188,190},  {189,191}, {190,175},
        {208,193},{192,194}, {193,195}, {194,211}, {-1,-1},   {213,198},  {197,182}, {-1,-1},   {-1,-1},    {217,202},	{201,186},     {-1,-1},    {205,220}, 	 {206,204},  {207,205}, {223,206},
        {209,192},{225,208}, {-1,-1},   {195,212}, {211,213}, {212,197},  {-1,-1},   {-1,-1},   {-1,-1},    {218,201},	{219,217},     {220,218},  {204,219},	 {-1,-1},    {238,223}, {222,207},
        {-1,-1},  {226,209}, {227,225}, {228,226}, {229,227}, {245,228},  {-1,-1},   {-1,-1},   {-1,-1},    {-1,-1},	{250,235},     {234,236},  {235,237},	 {236,238},  {237,222}, {-1,-1},
        {-1,241}, {240,242},{241,243},  {242,244}, {243,245}, {244,229},  {-1,-1},   {-1,-1},   {-1,-1},    {-1,-1},	{251,234},     {252,250},  {253,251},	 {254,252},  {255,253}, {-1,254},
    },
};
//{8,813},   {24, 803},  {40, 803}, {56, 803}, {72, 803} ,{88, 801},
//{167,809}, {183, 803}, {199, 803}, {215, 803}, {231, 803} ,{247, 8},
//{8,813}, {24, 803}, {40, 803}, {56, 803}, {72, 803} ,{88, 801},
//{8,813}, {24, 803}, {40, 803}, {56, 803}, {72, 803} ,{88, 801},

//level[8] = 813;
//level[24] = 803;
//level[40] = 803;
//level[56] = 803;
//level[72] = 803;
//level[88] = 801;

//level[167] = 809;
//level[183] = 803;
//level[199] = 803;
//level[215] = 803;
//level[231] = 803;
//level[247] = 812;

//level[112] = 811;
//for (int i=113;i<117;i++)
//    level[i] = 816;
//level[117] = 815;

//level[138] = 800;
//for (int i=139;i<143;i++)
//    level[i] = 816;
//level[143] = 814;

// Colors for the board elements
sf::Color playersColors[4] = {
    sf::Color(0, 150,255,255),
    sf::Color(50, 230,50,255),
    sf::Color(230, 50,50,255),
    sf::Color(150, 150,150,255)
};

}
