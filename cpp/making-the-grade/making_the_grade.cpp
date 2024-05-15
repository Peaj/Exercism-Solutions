#include <array>
#include <string>
#include <vector>

// Round down all provided student scores.
std::vector<int> round_down_scores(std::vector<double> student_scores) {
    size_t size = student_scores.size();
    std::vector<int> rounded_scores(size);
    for (int i = 0; i < size; ++i)
    {
        rounded_scores[i] = static_cast<int>(student_scores[i]);
    }
    return rounded_scores;
}


// Count the number of failing students out of the group provided.
int count_failed_students(std::vector<int> student_scores) {
    int failed = 0;
    for (auto score : student_scores)
    {
        if (score <= 40.0) ++failed;
    }
    return failed;
}

// Determine how many of the provided student scores were 'the best' based on the provided threshold.
std::vector<int> above_threshold(std::vector<int> student_scores, int threshold) {
    std::vector<int> above_threshold{};
    for (auto score : student_scores)
    {
        if (score >= threshold) above_threshold.push_back(score);
    }
    return above_threshold;
}

// Create a list of grade thresholds based on the provided highest grade.
std::array<int, 4> letter_grades(int highest_score) {
    int step = (highest_score - 40.0) / 4.0;
    std::array<int, 4> lower_thresholds{};
    for (int i=0; i<4; ++i)
    {
        lower_thresholds[i] = 41 + (i * step);
    }
    return lower_thresholds;
}

// Organize the student's rank, name, and grade information in ascending order.
std::vector<std::string> student_ranking(std::vector<int> student_scores, std::vector<std::string> student_names) {
    std::vector<std::string> ranking{};
    for (int i = 0; i < student_scores.size(); ++i)
    {
        ranking.push_back(std::to_string(i + 1) + ". " + student_names[i] + ": " + std::to_string(student_scores[i]));
    }
    return ranking;
}

// Create a string that contains the name of the first student to make a perfect score on the exam.
std::string perfect_score(std::vector<int> student_scores, std::vector<std::string> student_names) {
    for (int i = 0; i < student_scores.size(); ++i)
    {
        if (student_scores[i] == 100.0) return student_names[i];
    }
    return "";
}
