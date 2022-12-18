#include <gtest/gtest.h>

#include "main.cpp"

TEST(TestPlayer, PlayerTest)
{
    Player test_player("Test", 0);
    EXPECT_EQ(test_player.GetName(), "Test");
    EXPECT_EQ(test_player.GetFrameId(), 0);
}

TEST(TestStory, StoryTest)
{
    std::vector<Answer> test_answers;
    Answer answer;
    answer.SetId(1);
    for (int i = 0; i < 5; i++)
    {
        test_answers.push_back(answer);
    }
    Story test_story(1, "Teszt", test_answers);
    EXPECT_EQ(test_story.GetId(), 1);
    EXPECT_EQ(test_story.GetText(), "Teszt");
}

TEST(TestGameClass, GameClassTest)
{
    Game game;
    EXPECT_TRUE(game.is_number("1"));
    EXPECT_FALSE(game.is_number("a"));
}

TEST(TestFileHandler, FileHandlerTest)
{
    EXPECT_GE(ReadPlayers()[0].GetFrameId(), 0);
}