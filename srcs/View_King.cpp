#include "../includes/View.hpp"

void    ViewGame::PawnMove_vs_King(Figure &f, const string &ss, const string& s1, const string& s2) {
    vector<string> v;

    s1.size();
    string K1 = "ABCDEFGH";
    string K2 = "12345678";
    int     i1 = 0;
    int     i2 = 0;
    while (K1[i1] != '\0') {
        if (K1[i1] == ss[0])
            break ;
        i1++;
    }
    while (K2[i2] != '\0') {
        if (K2[i2] == ss[1])
            break ;
        i2++;
    }
    if (f.NameFigure[0] == 'B') {
        string s;
        if (i2 - 1 >= 0 && i1 - 1 >= 0) {
            s.push_back(K1[i1 - 1]);
            s.push_back(K2[i2 - 1]);
            if (this->model.GetMap()[s].NameFigure == "W|P" && s2 != s) {
                v.push_back(s);
            }
            s.clear();
        }
        if (i2 - 1 >= 0 && i1 + 1 <= 7) {
            s.push_back(K1[i1 + 1]);
            s.push_back(K2[i2 - 1]);
            if (this->model.GetMap()[s].NameFigure == "W|P" && s2 != s) {
                v.push_back(s);
            }
            s.clear();
        }
        if (v.size() > 0) {
            f.path.push_back(v);
            v.clear();
        }
    } else if (f.NameFigure[0] == 'W') {
        string s;
        if (i2 + 1 <= 7 && i1 - 1 >= 0) {
            s.push_back(K1[i1 - 1]);
            s.push_back(K2[i2 - 1]);
            if (this->model.GetMap()[s].NameFigure == "B|P" && s2 != s) {
                v.push_back(s);
            }
            s.clear();
        }
        if (i2 + 1 <= 7 && i1 + 1 <= 7) {
            s.push_back(K1[i1 + 1]);
            s.push_back(K2[i2 - 1]);
            if (this->model.GetMap()[s].NameFigure == "B|P" && s2 != s) {
                v.push_back(s);
            }
            s.clear();
        }
        if (v.size() > 0) {
            f.path.push_back(v);
            v.clear();
        }
    }
}

void    ViewGame::RookMove_vs_King(Figure &f, const string &ss, const string &s1, const string &s2) {
    vector<string> v;

    string K1 = "ABCDEFGH";
    string K2 = "12345678";
    int     i1 = 0;
    int     i2 = 0;
    while (K1[i1] != '\0') {
        if (K1[i1] == ss[0])
            break ;
        i1++;
    }
    while (K2[i2] != '\0') {
        if (K2[i2] == ss[1])
            break ;
        i2++;
    }
    int c = i1 + 1;
    while (c <= 7) {
        string s, s3;
        s.clear();
        s3.clear();
        s.push_back(K1[c]);
        s.push_back(K2[i2]);
        s3 = this->model.GetMap()[s].NameFigure;
        if (s == s1) {
            c++;
            s.clear();
            continue ;
        } else if (s == s2) {
            s.clear();
            break ;
        } else if (s3 == "") {
            c++;
            s.clear();
            continue ;
        } else if (s3[0] == f.NameFigure[0]) {
            break ;
        } else if (s3[2] == 'Q' || s3[2] == 'R') {
            v.push_back(s);
            break ;
        } else if (s3[0] != f.NameFigure[0]) {
            break ;
        }
        c++;
    }
    c = i1 - 1;
    while (c >= 0) {
        string s, s3;
        s.clear();
        s3.clear();
        s.push_back(K1[c]);
        s.push_back(K2[i2]);
        s3 = this->model.GetMap()[s].NameFigure;
        if (s == s1) {
            c--;
            s.clear();
            continue ;
        } else if (s == s2) {
            s.clear();
            break ;
        } else if (s3 == "") {
            c--;
            s.clear();
            continue ;
        } else if (s3[0] == f.NameFigure[0]) {
            break ;
        } else if (s3[2] == 'Q' || s3[2] == 'R') {
            v.push_back(s);
            break ;
        } else if (s3[0] != f.NameFigure[0]) {
            break ;
        }
        c--;
    }
    c = i2 - 1;
    while (c >= 0) {
        string s, s3;
        s.clear();
        s3.clear();
        s.push_back(K1[i1]);
        s.push_back(K2[c]);
        s3 = this->model.GetMap()[s].NameFigure;
        if (s == s1) {
            c--;
            s.clear();
            continue ;
        } else if (s == s2) {
            s.clear();
            break ;
        } else if (s3 == "") {
            c--;
            s.clear();
            continue ;
        } else if (s3[0] == f.NameFigure[0]) {
            break ;
        } else if (s3[2] == 'Q' || s3[2] == 'R') {
            v.push_back(s);
            break ;
        } else if (s3[0] != f.NameFigure[0]) {
            break ;
        }
        c--;
    }

    c = i2 + 1;
    while (c <= 7) {
        string s, s3;
        s.clear();
        s3.clear();
        s.push_back(K1[i1]);
        s.push_back(K2[c]);
        s3 = this->model.GetMap()[s].NameFigure;
        if (s == s1) {
            c++;
            s.clear();
            continue ;
        } else if (s == s2) {
            s.clear();
            break ;
        } else if (s3 == "") {
            c++;
            s.clear();
            continue ;
        } else if (s3[0] == f.NameFigure[0]) {
            break ;
        } else if (s3[2] == 'Q' || s3[2] == 'R') {
            v.push_back(s);
            break ;
        } else if (s3[0] != f.NameFigure[0]) {
            break ;
        }
        c++;
    }
    if (v.size() > 0) {
        f.path.push_back(v);
        v.clear();
    }
}

void    ViewGame::BishopMove_vs_King(Figure &f, const string &ss, const string &s1, const string &s2) {
    vector<string> v;

    string K1 = "ABCDEFGH";
    string K2 = "12345678";
    int     i1 = 0;
    int     i2 = 0;
    while (K1[i1] != '\0') {
        if (K1[i1] == ss[0])
            break ;
        i1++;
    }
    while (K2[i2] != '\0') {
        if (K2[i2] == ss[1])
            break ;
        i2++;
    }
    int c = i1 + 1;
    int c2 = i2 + 1;
    while (c <= 7 && c2 <= 7) {
        string s, s3;
        s.clear();
        s3.clear();
        s.push_back(K1[c]);
        s.push_back(K2[c2]);
        s3 = this->model.GetMap()[s].NameFigure;
        if (s == s1) {
            c++;
            c2++;
            s.clear();
            continue ;
        } else if (s == s2) {
            s.clear();
            break ;
        } else if (s3 == "") {
            c++;
            c2++;
            s.clear();
            continue ;
        } else if (s3[0] == f.NameFigure[0]) {
            break ;
        } else if (s3[2] == 'Q' || s3[2] == 'B') {
            v.push_back(s);
            break ;
        } else if (s3[0] != f.NameFigure[0]) {
            break ;
        }
        c++;
        c2++;
    }
    c = i1 - 1;
    c2 = i2 - 1;
    while (c >= 0 && c2 >= 0) {
        string s, s3;
        s.clear();
        s3.clear();
        s.push_back(K1[c]);
        s.push_back(K2[c2]);
        s3 = this->model.GetMap()[s].NameFigure;
        if (s == s1) {
            c--;
            c2--;
            s.clear();
            continue ;
        } else if (s == s2) {
            s.clear();
            break ;
        } else if (s3 == "") {
            c--;
            c2--;
            s.clear();
            continue ;
        } else if (s3[0] == f.NameFigure[0]) {
            break ;
        } else if (s3[2] == 'Q' || s3[2] == 'B') {
            v.push_back(s);
            break ;
        } else if (s3[0] != f.NameFigure[0]) {
            break ;
        }
        c--;
        c2--;
    }
    c = i2 - 1;
    c2 = i1 + 1;
    while (c >= 0 && c2 <= 7) {
        string s, s3;
        s.clear();
        s3.clear();
        s.push_back(K1[c2]);
        s.push_back(K2[c]);
        s3 = this->model.GetMap()[s].NameFigure;
        if (s == s1) {
            c--;
            c2++;
            s.clear();
            continue ;
        } else if (s == s2) {
            s.clear();
            break ;
        } else if (s3 == "") {
            c--;
            c2++;
            s.clear();
            continue ;
        } else if (s3[0] == f.NameFigure[0]) {
            break ;
        } else if (s3[2] == 'Q' || s3[2] == 'B') {
            v.push_back(s);
            break ;
        } else if (s3[0] != f.NameFigure[0]) {
            break ;
        }
        c--;
        c2++;
    }

    c = i2 + 1;
    c2 = i1 - 1;
    while (c <= 7 && c2 >= 0) {
        string s, s3;
        s.clear();
        s3.clear();
        s.push_back(K1[c2]);
        s.push_back(K2[c]);
        s3 = this->model.GetMap()[s].NameFigure;
        if (s == s1) {
            c++;
            c2--;
            s.clear();
            continue ;
        } else if (s == s2) {
            s.clear();
            break ;
        } else if (s3 == "") {
            c++;
            c2--;
            s.clear();
            continue ;
        } else if (s3[0] == f.NameFigure[0]) {
            break ;
        } else if (s3[2] == 'Q' || s3[2] == 'B') {
            v.push_back(s);
            break ;
        } else if (s3[0] != f.NameFigure[0]) {
            break ;
        }
        c++;
        c2--;
    }
    if (v.size() > 0) {
        f.path.push_back(v);
        v.clear();
    }
}

void    ViewGame::KnightMove_vs_King(Figure &f, const string &ss, const string &s1, const string &s2) {
    string K1 = "ABCDEFGH";
    string K2 = "12345678";
    s1.size();
    int     i1 = 0;
    int     i2 = 0;
    while (K1[i1] != '\0') {
        if (K1[i1] == ss[0])
            break ;
        i1++;
    }
    while (K2[i2] != '\0') {
        if (K2[i2] == ss[1])
            break ;
        i2++;
    }
    vector<string> v;
    int c = i1 + 2;
    int c2 = i2 + 1;
    int c3 = i2 - 1;
    if (c <= 7 && (c2 <= 7 || c3 >= 0)) {
        string s, s3;
        if (c <= 7 && c2 <= 7) {
            s.push_back(K1[c]);
            s.push_back(K2[c2]);
            s3 = this->model.GetMap()[s].NameFigure;
            if (s != s1 && s != s2 && s3 != "" && s3[2] == 'N' && s3[0] != f.NameFigure[0]) {
                    v.push_back(s);
            }
        }
        s.clear();
        s3.clear();
        if (c <= 7 && c3 >= 0) {
            s.push_back(K1[c]);
            s.push_back(K2[c3]);
            s3 = this->model.GetMap()[s].NameFigure;
            if (s != s1 && s != s2 && s3 != "" && s3[2] == 'N' && s3[0] != f.NameFigure[0]) {
                v.push_back(s);
            }
        }
    }
    c = i1 - 2;
    c2 = i2 + 1;
    c3 = i2 - 1;
    if (c >= 0 && (c2 <= 7 || c3 >= 0)) {
        string s, s3;
        if (c >= 0 && c2 <= 7) {
            s.push_back(K1[c]);
            s.push_back(K2[c2]);
            s3 = this->model.GetMap()[s].NameFigure;
            if (s != s1 && s != s2 && s3 != "" && s3[2] == 'N' && s3[0] != f.NameFigure[0]) {
                v.push_back(s);
            }
        }
        s.clear();
        s3.clear();
        if (c >= 0 && c3 >= 0) {
            s.push_back(K1[c]);
            s.push_back(K2[c3]);
            s3 = this->model.GetMap()[s].NameFigure;
            if (s != s1 && s != s2 && s3 != "" && s3[2] == 'N' && s3[0] != f.NameFigure[0]) {
                v.push_back(s);
            }
        }
    }
    c = i1 + 1;
    c2 = i1 - 1;
    c3 = i2 + 2;
    if (c3 <= 7 && (c <= 7 || c2 >= 0)) {
        string s, s3;
        if (c <= 7 && c3 <= 7) {
            s.push_back(K1[c]);
            s.push_back(K2[c3]);
            s3 = this->model.GetMap()[s].NameFigure;
            if (s != s1 && s != s2 && s3 != "" && s3[2] == 'N' && s3[0] != f.NameFigure[0]) {
                v.push_back(s);
            }
        }
        s.clear();
        s3.clear();
        if (c2 >= 0 && c3 <= 7) {
            s.push_back(K1[c2]);
            s.push_back(K2[c3]);
            s3 = this->model.GetMap()[s].NameFigure;
            if (s != s1 && s != s2 && s3 != "" && s3[2] == 'N' && s3[0] != f.NameFigure[0]) {
                v.push_back(s);
            }
        }
    }
    c = i1 + 1;
    c2 = i1 - 1;
    c3 = i2 - 2;
    if (c3 >= 0 && (c2 >= 0 || c <= 7)) {
        string s, s3;
        if (c <= 7 && c3 >= 0) {
            s.push_back(K1[c]);
            s.push_back(K2[c3]);
            s3 = this->model.GetMap()[s].NameFigure;
            if (s != s1 && s != s2 && s3 != "" && s3[2] == 'N' && s3[0] != f.NameFigure[0]) {
                v.push_back(s);
            }
        }
        s.clear();
        s3.clear();
        if (c3 >=  0 && c2 >= 0) {
            s.push_back(K1[c2]);
            s.push_back(K2[c3]);
            s3 = this->model.GetMap()[s].NameFigure;
            if (s != s1 && s != s2 && s3 != "" && s3[2] == 'N' && s3[0] != f.NameFigure[0]) {
                v.push_back(s);
            }
        }
    }
    if (v.size())
        f.path.push_back(v);
}

void ViewGame::KingMove_vs_King(Figure &f, const string &ss, const string &s1, const string &s2) {
    string K1 = "ABCDEFGH";
    string K2 = "12345678";
    int     i1 = 0;
    int     i2 = 0;
    while (K1[i1] != '\0') {
        if (K1[i1] == ss[0])
            break ;
        i1++;
    }
    while (K2[i2] != '\0') {
        if (K2[i2] == ss[1])
            break ;
        i2++;
    }
    vector<string> v;
    int i = 0;
    while (i < 8) {
        string s, s3;
        int cc = 0;
        int cx = 0;
        if (i == 0) {
            cc = i1 + 1;
            cx = i2;
            if (cc > 7 && ++i)
                continue ;
        } else if (i == 1) {
            cc = i1 - 1;
            cx = i2;
            if (cc < 0 && i++)
                continue ;
        } else if (i == 2) {
            cc = i1;
            cx = i2 + 1;
            if (cx > 7 && i++)
                continue ;
        } else if (i == 3) {
            cc = i1;
            cx = i2 - 1;
            if (cx < 0 && i++)
                continue ;
        } else if (i == 4) {
            cc = i1 + 1;
            cx = i2 + 1;
            if (!(cc <= 7 && cx <= 7) && i++)
                continue ;
        } else if (i == 5) {
            cc = i1 - 1;
            cx = i2 - 1;
            if (!(cx >= 0 && cc >= 0 && cx >= 0) && i++)
                continue ;
        } else if (i == 6) {
            cc = i1 + 1;
            cx = i2 - 1;
            if (!(K1[cc] != '\0' && cx >= 0 && cc <= 7) && i++)
                continue ;
        } else if (i == 7) {
            cc = i1 - 1;
            cx = i2 + 1;
            if (!(K2[cx] != '\0' && cc >= 0 && cx <= 7) && i++)
                continue ;
        }
        s.push_back(K1[cc]);
        s.push_back(K2[cx]);
        s3 = this->model.GetMap()[s].NameFigure;
        if (s != s1 && s != s2 && s3 != "" && s3[0] != f.NameFigure[0] && f.NameFigure[2] == 'K')
        {
            v.push_back(s1);
        }
        s.clear();
        s3.clear();
        i++;
    }
    if (v.size())
        f.path.push_back(v);

}
