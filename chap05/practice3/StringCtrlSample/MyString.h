#pragma

class CMyString{
public:
	CMyString();

	explicit CMyString(const char *pszParam);
	
	CMyString(const CMyString &rhs);

	CMyString(CMyString &&rhs);

	~CMyString();
	
private: 
	char* m_pszData;

	int m_nLength;
public: 
	public:
	int SetString(const char* pszParam);

	const char* GetString() const;

	void Release();
	CMyString& operator=(const CMyString &rhs);

	operator char*() const
	{
		return m_pszData;
	}

	int GetLength() const;
	int Append(const char * pszParam);
	CMyString operator+(const CMyString & rhs);
	CMyString& operator+=(const CMyString & rhs);
};
