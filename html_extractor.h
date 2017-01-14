#pragma once

class HtmlExtractor
{
 public:
  HtmlExtractor();
  ~HtmlExtractor();
  
  void set_template_provider(const TemplateProvider& p);
  
  int LoadTemplate(string* err);
  
  int Extract(const string& content, const string& url, string* err);
  
 private:
};
