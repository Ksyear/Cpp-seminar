#pragma

class CMyString{
public:
	CMyString();
	~CMyString();


private: 
	char* m_pszData;

	int m_nLength;
public: 
	int SetString(const char* pszPatam);
	const char* GetString() const;
	void Release();
};
