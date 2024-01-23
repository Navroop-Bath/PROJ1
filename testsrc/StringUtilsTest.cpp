#include <gtest/gtest.h>
#include "StringUtils.h"

TEST(StringUtilsTest, SliceTest){
    std::string Base = "Hello";
    EXPECT_EQ(StringUtils::Slice(Base,0),"Hello");
    EXPECT_EQ(StringUtils::Slice(Base,1),"ello");
}

TEST(StringUtilsTest, Capitalize){
    std::string Base = "hello";
    EXPECT_EQ(StringUtils::Capitalize(Base),"Hello");
    EXPECT_EQ(StringUtils::Capitalize(std::string()),"");
    EXPECT_EQ(StringUtils::Capitalize(" hello")," hello");
    EXPECT_EQ(StringUtils::Capitalize("HELLO"),"Hello");
    EXPECT_EQ(StringUtils::Capitalize("  \t\r\n;*^73"),"  \t\r\n;*^73");
}

TEST(StringUtilsTest, Upper){
    std::string Base = "hello";
    EXPECT_EQ(StringUtils::Upper(Base),"HELLO");
    EXPECT_EQ(StringUtils::Upper(" test")," TEST");
    EXPECT_EQ(StringUtils::Upper("CAP!"),"CAP!");
    EXPECT_EQ(StringUtils::Upper(" WIll ThIs worK ")," WILL THIS WORK ");
    EXPECT_EQ(StringUtils::Upper(std::string()),"");
}

TEST(StringUtilsTest, Lower){
    EXPECT_EQ(StringUtils::Lower("Test"),"test");
    EXPECT_EQ(StringUtils::Lower(" TesT")," test");
    EXPECT_EQ(StringUtils::Lower("CHECK"),"check");
    EXPECT_EQ(StringUtils::Lower("TESTING a NeW STring"),"testing a new string");
    EXPECT_EQ(StringUtils::Lower(std::string()),"");   
}

TEST(StringUtilsTest, LStrip){
    EXPECT_EQ(StringUtils::LStrip("  TEST"),"TEST");
    EXPECT_EQ(StringUtils::LStrip(" Test "),"Test ");
    EXPECT_EQ(StringUtils::LStrip("Test"),"Test");
    EXPECT_EQ(StringUtils::LStrip("  Multi-Word test  "),"Multi-Word test  ");
    EXPECT_EQ(StringUtils::LStrip(" "),"");
    EXPECT_EQ(StringUtils::LStrip(std::string()),"");
    EXPECT_EQ(StringUtils::LStrip("     I"),"I"); 
}

TEST(StringUtilsTest, RStrip){
    EXPECT_EQ(StringUtils::RStrip("Test  "),"Test");
    EXPECT_EQ(StringUtils::RStrip("  Test  "),"  Test");
    EXPECT_EQ(StringUtils::RStrip(" Multi Word Test          ")," Multi Word Test");
    EXPECT_EQ(StringUtils::RStrip(std::string()),"");
    EXPECT_EQ(StringUtils::RStrip("  "),"");
    EXPECT_EQ(StringUtils::RStrip("I   "),"I");
    EXPECT_EQ(StringUtils::RStrip("Test\t  "),"Test\t");
}

TEST(StringUtilsTest, Strip){
    EXPECT_EQ(StringUtils::Strip("  !  "),"!");
    EXPECT_EQ(StringUtils::Strip("  "),"");
    EXPECT_EQ(StringUtils::Strip("  Test"),"Test");
    EXPECT_EQ(StringUtils::Strip("Test   "),"Test");
    EXPECT_EQ(StringUtils::Strip(std::string()),"");
    EXPECT_EQ(StringUtils::Strip("Control"),"Control");
}

TEST(StringUtilsTest, Center){
    EXPECT_EQ(StringUtils::Center("Test",11,"_"),"____Test___");
    EXPECT_EQ(StringUtils::Center("No fill need",12),"No fill need");
    EXPECT_EQ(StringUtils::Center(" Test",10,"0"),"00 Test000");
    EXPECT_EQ(StringUtils::Center(std::string(),5),"     ");
    EXPECT_EQ(StringUtils::Center(),);
    EXPECT_EQ(StringUtils::Center(),);
}

TEST(StringUtilsTest, LJust){
    EXPECT_EQ(StringUtils::LJust(std::string(),5),"     ");
    EXPECT_EQ(StringUtils::LJust("  1 ",6,"0"),"  1 00");
    EXPECT_EQ(StringUtils::LJust("Test",10),"Test      ");
    EXPECT_EQ(StringUtils::LJust("Multi Word ",15,"O"),"Multi Word OOOO");
}

TEST(StringUtilsTest, RJust){
    EXPECT_EQ(StringUtils::RJust(std::string(),3,"!"),"!!!");
    EXPECT_EQ(StringUtils::RJust("1",7),"      1");
    EXPECT_EQ(StringUtils::RJust("Test",10,"I"),"IIIIIITest");
    EXPECT_EQ(StringUtils::RJust("  Test  ",10),"    Test  ");
    EXPECT_EQ(StringUtils::RJust(" Multi Word ",15,"0"),"000  Multi Word");
}

TEST(StringUtilsTest, Replace){
    EXPECT_EQ(StringUtils::Replace("America","A","b"),"Americb");
    EXPECT_EQ(StringUtils::Replace(" xyz abc ijk xai x","x","1")," 1yz abc ijk 1ai 1");
    EXPECT_EQ(StringUtils::Replace(" I ","I"," "),"   ");
    EXPECT_EQ(StringUtils::Replace("abcdefg","j","k"),"abcdefg");
}

TEST(StringUtilsTest, Split){

}

TEST(StringUtilsTest, Join){
    
}

TEST(StringUtilsTest, ExpandTabs){
    
}

TEST(StringUtilsTest, EditDistance){
    
}
