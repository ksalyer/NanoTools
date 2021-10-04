#ifndef ISOLATIONTOOLS_H
#define ISOLATIONTOOLS_H
#include "Nano.h"
bool passesLeptonIso(unsigned int idx, int id, double mini_iso_cut, double pt_ratio_cut, double pt_rel_cut, float &miniiso, float &pt_ratio, float &pt_rel);
bool passesLeptonIso(unsigned int idx, int id, double mini_iso_cut, double pt_ratio_cut, double pt_rel_cut);
bool passesPFLeptonIso(unsigned int idx, int id, double mini_iso_cut, double pf_iso_cut);
float coneCorrPt(int id, int idx, float multiiso_minireliso, float multiiso_ptratio, float multiiso_ptrel);

#endif
