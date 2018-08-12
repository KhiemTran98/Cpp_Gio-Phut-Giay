class CTime
{
private:
	int h, m, s;
public:
	CTime();
	CTime(int h, int m, int s);
	~CTime();
	void Nhap();
	void Xuat();
	bool LaHopLe();
	int LaGiayThuMayTrongNgay();
};