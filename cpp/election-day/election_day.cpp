#include <string>
#include <vector>

namespace election {

// The election result struct is already created for you:

struct ElectionResult {
    // Name of the candidate
    std::string name{};
    // Number of votes the candidate has
    int votes{};
};

int vote_count(const ElectionResult& election_result)
{
    return election_result.votes;
}


void increment_vote_count(ElectionResult& election_result, int votes)
{
    election_result.votes += votes;
}


ElectionResult& determine_result(std::vector<ElectionResult>& results)
{
    int winner = 0;
    for (int i=1; i<results.size(); ++i)
    {
        if (results[i].votes > results[winner].votes) winner = i;
    }
    results[winner].name = "President " + results[winner].name;
    return results[winner];
}


}  // namespace election