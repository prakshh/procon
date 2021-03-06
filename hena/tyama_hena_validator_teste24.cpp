#include <string>
void test(const std::string &input, const std::string &expect);
void testloader(){ //insert test cases here
/*0*/ test( "16,333", "38e" );
/*1*/ test( "2,100", "-" );
/*2*/ test( "2,1", "1" );
/*3*/ test( "2,2", "-" );
/*4*/ test( "11,8", "8" );
/*5*/ test( "14,9", "9" );
/*6*/ test( "11,12", "13" );
/*7*/ test( "7,16", "34" );
/*8*/ test( "20,16", "g" );
/*9*/ test( "2,17", "-" );
/*10*/ test( "8,26", "56" );
/*11*/ test( "16,51", "3c" );
/*12*/ test( "3,77", "-" );
/*13*/ test( "2,100", "-" );
/*14*/ test( "9,110", "1347" );
/*15*/ test( "22,127", "78" );
/*16*/ test( "24,142", "79" );
/*17*/ test( "30,158", "5s" );
/*18*/ test( "20,213", "139" );
/*19*/ test( "6,216", "-" );
/*20*/ test( "9,244", "235678" );
/*21*/ test( "13,253", "57c" );
/*22*/ test( "19,265", "19c" );
/*23*/ test( "24,314", "13k" );
/*24*/ test( "16,333", "38e" );
/*25*/ test( "32,353", "eo" );
/*26*/ test( "25,490", "1dg" );
/*27*/ test( "26,498", "1bd" );
/*28*/ test( "10,500", "2456789" );
/*29*/ test( "10,543", "-" );
/*30*/ test( "3,897", "-" );
/*31*/ test( "11,1000", "1345789a" );
/*32*/ test( "9,1307", "-" );
/*33*/ test( "9,1412", "-" );
/*34*/ test( "26,1678", "79e" );
/*35*/ test( "8,1942", "-" );
/*36*/ test( "12,1950", "234589ab" );
/*37*/ test( "2,2245", "-" );
/*38*/ test( "18,2670", "5ace" );
/*39*/ test( "5,3013", "-" );
/*40*/ test( "5,3048", "-" );
/*41*/ test( "14,3099", "157acd" );
/*42*/ test( "27,3440", "13hm" );
/*43*/ test( "13,3698", "235689ab" );
/*44*/ test( "36,5592", "dqs" );
/*45*/ test( "10,9505", "-" );
/*46*/ test( "27,9833", "49ej" );
/*47*/ test( "16,10000", "123467e" );
/*48*/ test( "24,14090", "14bfk" );
/*49*/ test( "29,15270", "5mnq" );
/*50*/ test( "17,20000", "23458cg" );
/*51*/ test( "36,20000", "37bc" );
/*52*/ test( "25,24346", "256bk" );
/*53*/ test( "21,27815", "146adi" );
/*54*/ test( "25,28030", "2aflm" );
/*55*/ test( "25,34448", "3cefi" );
/*56*/ test( "36,44811", "abpu" );
}
