#pragma once

namespace hex {

class UrlPattern
{
 public:

  typedef std::unordered_map<std::string, std::string> MatchResult;

  explicit UrlPattern(const std::string& path_pattern);
 
  // add a regex for some query param, the value
  // of @query_param must match @value_pattern
  void AddQuery(const std::string& query_param,
                const std::string& value_pattern);
 
  // just clear query regexs
  void ResetQuery();
 
  // clear both path and query regex
  void Reset();
 
  // match this url_pattern to @target
  // the extracted values are stored in @match_result
  bool Match(const std::string& target,
             MatchResult* match_result);

 private:
  std::regex path_regex_;
  std::vector<std::regex> query_regexs_;
};

} // namespace hex
