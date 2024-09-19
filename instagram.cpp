#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <algorithm>

using namespace std;

class Instagram {
private:
    unordered_map<int, unordered_set<int>> followers;
    unordered_map<int, vector<int>> posts;
    unordered_map<int, int> stories;

public:
    Instagram() {}

    void post(int userId, int postId) {
        posts[userId].push_back(postId);
    }

    vector<int> feed(int userId) {
        vector<int> feed;
        if (posts.count(userId))
            feed = posts[userId];
        
        if (followers.count(userId)) {
            for (int followedUser : followers[userId]) {
                if (posts.count(followedUser)) {
                    feed.insert(feed.end(), posts[followedUser].begin(), posts[followedUser].end());
                }
            }
        }
        sort(feed.begin(), feed.end(), greater<int>());
        return feed;
    }

    void follow(int userId1, int userId2) {
        followers[userId1].insert(userId2);
    }

    void unfollow(int userId1, int userId2) {
        followers[userId1].erase(userId2);
    }

    void upload_story(int userId, int storyId) {
        stories[userId] = storyId;
    }

    vector<int> getStories(int userId) {
        vector<int> storyList;
        if (stories.count(userId))
            storyList.push_back(stories[userId]);

        if (followers.count(userId)) {
            for (int followedUser : followers[userId]) {
                if (stories.count(followedUser)) {
                    storyList.push_back(stories[followedUser]);
                }
            }
        }
        sort(storyList.begin(), storyList.end(), greater<int>());
        return storyList;
    }
};

int main() {
    Instagram instagram;
    instagram.post(1, 101);
    instagram.post(2, 102);
    instagram.post(2, 103);
    instagram.post(3, 104);
    instagram.follow(1, 2);
    instagram.follow(1, 3);
    instagram.follow(2, 3);
    instagram.upload_story(1, 201);
    instagram.upload_story(2, 202);
    instagram.upload_story(3, 203);

    vector<int> feed1 = instagram.feed(1);
    cout << "User 1's feed: ";
    for (int post : feed1) {
        cout << post << " ";
    }
    cout << endl;

    vector<int> stories1 = instagram.getStories(1);
    cout << "User 1's stories: ";
    for (int story : stories1) {
        cout << story << " ";
    }
    cout << endl;

    return 0;
}
