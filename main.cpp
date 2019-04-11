#include<iostream>
#include<string>
#include<algorithm>
#include<ctype.h>
#include<vector>
#include"Linked_List.h"

class Solution
{
public:
	// 709.转换成小写字母
	std::string toLowerCase(std::string str) {
		if (str == "")
			return "";
		else
		{
			for (int i = 0;i < str.length();i++) {
				if (str[i] >= 'A' && str[i] <= 'Z') {
					str[i] = (char)((int)str[i] + 'a' - 'A');
				}
			}
		}

		return str;
	}

	// 344.反转字符串
	std::string reverseString(std::string s) {
		// 方法一
		/*if (s == "")
			return "";
		else
		{
			char temp_char;
			for (int i = 0;i < s.length() / 2;i++) {
				temp_char = s[i];
				s[i] = s[s.length() - 1 - i];
				s[s.length() - 1 - i] = temp_char;
			}
			return s;
		}*/
		// 方法二
		std::reverse(s.begin(), s.end());
		return s;
	}

	// 557.反转字符串中的单词III
	std::string reverseWords(std::string s) {
		int i = 0, p = 0, q = 0;
		for (i = 0;i < s.length();i++) {
			if ((int)s[i] == 32) {
				q = i - 1;
				char temp_char;
				int mid = (p + q + 1) / 2;
				for (p;p < mid;p++, q--) {
					temp_char = s[p];
					s[p] = s[q];
					s[q] = temp_char;
				}
				p = i + 1;
			}
		}
		q = i - 1;
		char temp_char;
		int mid = (p + q + 1) / 2;
		for (p;p < mid;p++, q--) {
			temp_char = s[p];
			s[p] = s[q];
			s[q] = temp_char;
		}
		return s;
	}

	// 657.机器人能否返回原点
	bool judgeCircle(std::string moves) {
		int u = 0, d = 0, l = 0, r = 0;
		//for (int i = 0;i < moves.length();i++) {
		//	if (moves[i] == 'U') {
		//		u++;
		//		continue;	// 优化添加的代码
		//	}
		//	else if (moves[i] == 'D')
		//	{
		//		d++;
		//		continue;	// 优化
		//	}
		//	else if (moves[i] == 'L')
		//	{
		//		l++;
		//		continue;	// 优化
		//	}
		//	else
		//	{
		//		r++;
		//	}
		//}
		//if (u == d && l == r) {
		//	return true;
		//}
		//else
		//{
		//	return false;
		//}
		for (int i = 0;i < moves.length();i++) {
			u += moves[i] == 'U';
			d += moves[i] == 'D';
			l += moves[i] == 'L';
			r += moves[i] == 'R';
		}
		return u == d && l == r;
	}

	// 521.最长特殊序列I
	int findLUSlength(std::string a, std::string b) {
		/*	if (a.length() == b.length()) {
				return a == b ? -1:a.length();
			}
			else
			{
				return a.length() > b.length() ? a.length() : b.length();
			}*/
		return a == b ? -1 : std::max(a.length(), b.length());
	}

	// 125. 验证回文串
	bool isPalindrome(std::string s) {
		int i = 0, j = s.length() - 1;
		while (i < j)
		{
			while (!((s[i] >= 'a'&& s[i] <= 'z') || (s[i] >= 'A'&&s[i] <= 'Z') || (s[i] >= '0'&&s[i] <= '9')) && i <= s.length() - 1)
			{
				i++;
			}

			while (!((s[j] >= 'a'&& s[j] <= 'z') || (s[j] >= 'A'&&s[j] <= 'Z') || (s[j] >= '0'&&s[j] <= '9')) && j >= 0)
			{
				j--;
				if (j < 0)
					return true;
			}

			if (!(s[i] == s[j] || (
				(s[i] - s[j] == 32 || s[j] - s[i] == 32)
				&&
				isalpha(s[i])
				&& isalpha(s[j])))) {
				return false;
			}
			else
			{
				i++;
				j--;
			}
		}
		if (i >= j) {
			return true;
		}
	}

	// 929. 独特的电子邮件地址
	int numUniqueEmails(std::vector<std::string>& emails) {
		int n;
		std::vector<std::string> unique_emails;
		std::string temp;
		int k = 0, w, j = 0;
		for (int i = 0;i < emails.size();i++) {
			if (!emails[i].find('@')) { continue; }
			else
			{
				while (j < emails.size())
				{
					if (emails[i][j] == '+') {
						while (emails[i][j] != '@')
						{
							j++;
						}
						temp = emails[i].substr(j - 1);
					}
					else if (emails[i][j] != '.') {
						unique_emails[k].push_back(emails[i][j++]);
					}
					else
					{
						j++;
					}
				}
			}
		}
	}

};

int main() {
	/*std::string str = "A man, a plan, a canal : Panama";
	std::string str1 = "UUUDDDLR";
	Solution s;
	std::cout << s.toLowerCase(str) << std::endl;
	std::cout << s.reverseString(str) << std::endl;
	std::cout << s.reverseWords(str) << std::endl;
	std::cout << s.judgeCircle(str) << std::endl;
	std::cout << s.findLUSlength(str, str1) << std::endl;
	std::cout << "s.isPalindrome(str): " << s.isPalindrome(str) << std::endl;*/
	
	ListNode* node;
	node = LISTNODE::createNode();
	LISTNODE::printNode(node);
	LISTNODE::deleteDuplicates(node);
	LISTNODE::printNode(node);
	LISTNODE::middleNode(node);

	return 0;
}