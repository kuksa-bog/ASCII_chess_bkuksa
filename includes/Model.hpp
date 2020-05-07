#ifndef MODEL_HPP
# define MODEL_HPP

#include "include.hpp"

class Model {
public:
    Model();
//    // Model(string str);
//
//    Model& 	operator=(const Model& mod);
//
    int 	GetMove() const;
    int 	GetCount() const;
    int		GetCheck() const;
    string	GetName() const;
    void	SetName(string& name);
    void	SetCheck(int k);
    void	SetCount(int k);
    void	SetMove(int k);
    map<string, Figure>	&GetMap();
    map<string, Figure>	GetMap2() const;
//
    map<string, Figure>  mapp;
//
    void    SetIfCastlingWhiteKing(int i);
    void    SetIfCastlingBlackKing(int i);
    void    SetIfCastlingWhiteRookA1(int i);
    void    SetIfCastlingWhiteRookH1(int i);
    void    SetIfCastlingBlackRookA8(int i);
    void    SetIfCastlingBlackRookH8(int i);
    int     GetIfCastlingWhiteKing() const ;
    int     GetIfCastlingBlackKing() const ;
    int     GetIfCastlingWhiteRookA1() const ;
    int     GetIfCastlingBlackRookA8() const ;
    int     GetIfCastlingWhiteRookH1() const ;
    int     GetIfCastlingBlackRookH8() const ;

private:
    int		Move;
    int		count;
    int		check;
    int     IfCastlingWhiteKing;
    int     IfCastlingBlackKing;
    int     IfCastlingWhiteRookA1;
    int     IfCastlingWhiteRookH1;
    int     IfCastlingBlackRookA8;
    int     IfCastlingBlackRookH8;
    string	name;
};

ostream&	operator<<(ostream& os, const Model& mod);
istream&    operator>>(istream& is, Model& mod);

#endif
