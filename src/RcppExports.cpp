// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// findNumberInVector
IntegerVector findNumberInVector(int number, IntegerVector vec);
RcppExport SEXP _WaterGAPLite_findNumberInVector(SEXP numberSEXP, SEXP vecSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type number(numberSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type vec(vecSEXP);
    rcpp_result_gen = Rcpp::wrap(findNumberInVector(number, vec));
    return rcpp_result_gen;
END_RCPP
}
// findUniqueValues
IntegerVector findUniqueValues(IntegerVector vec);
RcppExport SEXP _WaterGAPLite_findUniqueValues(SEXP vecSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type vec(vecSEXP);
    rcpp_result_gen = Rcpp::wrap(findUniqueValues(vec));
    return rcpp_result_gen;
END_RCPP
}
// sortIt
IntegerVector sortIt(IntegerVector vec);
RcppExport SEXP _WaterGAPLite_sortIt(SEXP vecSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type vec(vecSEXP);
    rcpp_result_gen = Rcpp::wrap(sortIt(vec));
    return rcpp_result_gen;
END_RCPP
}
// sumVector
double sumVector(NumericVector vec);
RcppExport SEXP _WaterGAPLite_sumVector(SEXP vecSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type vec(vecSEXP);
    rcpp_result_gen = Rcpp::wrap(sumVector(vec));
    return rcpp_result_gen;
END_RCPP
}
// numberOfDaysInMonth
int numberOfDaysInMonth(int month, int year);
RcppExport SEXP _WaterGAPLite_numberOfDaysInMonth(SEXP monthSEXP, SEXP yearSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type month(monthSEXP);
    Rcpp::traits::input_parameter< int >::type year(yearSEXP);
    rcpp_result_gen = Rcpp::wrap(numberOfDaysInMonth(month, year));
    return rcpp_result_gen;
END_RCPP
}
// numberOfDaysInYear
int numberOfDaysInYear(int year);
RcppExport SEXP _WaterGAPLite_numberOfDaysInYear(SEXP yearSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type year(yearSEXP);
    rcpp_result_gen = Rcpp::wrap(numberOfDaysInYear(year));
    return rcpp_result_gen;
END_RCPP
}
// WaterUseConsumGW
double WaterUseConsumGW(int cell, NumericVector GroundwaterStorage, const NumericMatrix dailyUse);
RcppExport SEXP _WaterGAPLite_WaterUseConsumGW(SEXP cellSEXP, SEXP GroundwaterStorageSEXP, SEXP dailyUseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type cell(cellSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type GroundwaterStorage(GroundwaterStorageSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix >::type dailyUse(dailyUseSEXP);
    rcpp_result_gen = Rcpp::wrap(WaterUseConsumGW(cell, GroundwaterStorage, dailyUse));
    return rcpp_result_gen;
END_RCPP
}
// WaterUseCalcMeanDemandDaily
NumericVector WaterUseCalcMeanDemandDaily(int year, int GapYearType);
RcppExport SEXP _WaterGAPLite_WaterUseCalcMeanDemandDaily(SEXP yearSEXP, SEXP GapYearTypeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type year(yearSEXP);
    Rcpp::traits::input_parameter< int >::type GapYearType(GapYearTypeSEXP);
    rcpp_result_gen = Rcpp::wrap(WaterUseCalcMeanDemandDaily(year, GapYearType));
    return rcpp_result_gen;
END_RCPP
}
// WaterUseCalcDaily
void WaterUseCalcDaily(int waterUseType, NumericMatrix dailyUse, int year, int month, int StartYear, NumericMatrix Info_GW, NumericMatrix Info_SW, NumericMatrix Info_TF);
RcppExport SEXP _WaterGAPLite_WaterUseCalcDaily(SEXP waterUseTypeSEXP, SEXP dailyUseSEXP, SEXP yearSEXP, SEXP monthSEXP, SEXP StartYearSEXP, SEXP Info_GWSEXP, SEXP Info_SWSEXP, SEXP Info_TFSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type waterUseType(waterUseTypeSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type dailyUse(dailyUseSEXP);
    Rcpp::traits::input_parameter< int >::type year(yearSEXP);
    Rcpp::traits::input_parameter< int >::type month(monthSEXP);
    Rcpp::traits::input_parameter< int >::type StartYear(StartYearSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type Info_GW(Info_GWSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type Info_SW(Info_SWSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type Info_TF(Info_TFSEXP);
    WaterUseCalcDaily(waterUseType, dailyUse, year, month, StartYear, Info_GW, Info_SW, Info_TF);
    return R_NilValue;
END_RCPP
}
// createWaterBalance
List createWaterBalance(DateVector timestring);
RcppExport SEXP _WaterGAPLite_createWaterBalance(SEXP timestringSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< DateVector >::type timestring(timestringSEXP);
    rcpp_result_gen = Rcpp::wrap(createWaterBalance(timestring));
    return rcpp_result_gen;
END_RCPP
}
// dailyEstimateLongwave
double dailyEstimateLongwave(int n, int DOY, double dailyTempC, double dailyShortWave);
RcppExport SEXP _WaterGAPLite_dailyEstimateLongwave(SEXP nSEXP, SEXP DOYSEXP, SEXP dailyTempCSEXP, SEXP dailyShortWaveSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< int >::type DOY(DOYSEXP);
    Rcpp::traits::input_parameter< double >::type dailyTempC(dailyTempCSEXP);
    Rcpp::traits::input_parameter< double >::type dailyShortWave(dailyShortWaveSEXP);
    rcpp_result_gen = Rcpp::wrap(dailyEstimateLongwave(n, DOY, dailyTempC, dailyShortWave));
    return rcpp_result_gen;
END_RCPP
}
// dailyEstimateShortwave
NumericMatrix dailyEstimateShortwave(DateVector SimDates, NumericMatrix TempC, NumericMatrix Sunshine, IntegerVector GR, int cor_row);
RcppExport SEXP _WaterGAPLite_dailyEstimateShortwave(SEXP SimDatesSEXP, SEXP TempCSEXP, SEXP SunshineSEXP, SEXP GRSEXP, SEXP cor_rowSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< DateVector >::type SimDates(SimDatesSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type TempC(TempCSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type Sunshine(SunshineSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type GR(GRSEXP);
    Rcpp::traits::input_parameter< int >::type cor_row(cor_rowSEXP);
    rcpp_result_gen = Rcpp::wrap(dailyEstimateShortwave(SimDates, TempC, Sunshine, GR, cor_row));
    return rcpp_result_gen;
END_RCPP
}
// dailySnow
void dailySnow(int day, const NumericVector daily_prec_to_soil, NumericVector G_snow, NumericMatrix G_snowWaterEquivalent, NumericVector dailySnowMelt, NumericVector dailySnowEvapo, NumericVector thresh_elev, NumericVector dailyEffPrec, NumericVector dailySoilPET);
RcppExport SEXP _WaterGAPLite_dailySnow(SEXP daySEXP, SEXP daily_prec_to_soilSEXP, SEXP G_snowSEXP, SEXP G_snowWaterEquivalentSEXP, SEXP dailySnowMeltSEXP, SEXP dailySnowEvapoSEXP, SEXP thresh_elevSEXP, SEXP dailyEffPrecSEXP, SEXP dailySoilPETSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type day(daySEXP);
    Rcpp::traits::input_parameter< const NumericVector >::type daily_prec_to_soil(daily_prec_to_soilSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type G_snow(G_snowSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type G_snowWaterEquivalent(G_snowWaterEquivalentSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type dailySnowMelt(dailySnowMeltSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type dailySnowEvapo(dailySnowEvapoSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type thresh_elev(thresh_elevSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type dailyEffPrec(dailyEffPrecSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type dailySoilPET(dailySoilPETSEXP);
    dailySnow(day, daily_prec_to_soil, G_snow, G_snowWaterEquivalent, dailySnowMelt, dailySnowEvapo, thresh_elev, dailyEffPrec, dailySoilPET);
    return R_NilValue;
END_RCPP
}
// routing
List routing(DateVector SimPeriod, NumericMatrix surfaceRunoff, NumericMatrix GroundwaterRunoff, NumericMatrix PETw, NumericMatrix Prec);
RcppExport SEXP _WaterGAPLite_routing(SEXP SimPeriodSEXP, SEXP surfaceRunoffSEXP, SEXP GroundwaterRunoffSEXP, SEXP PETwSEXP, SEXP PrecSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< DateVector >::type SimPeriod(SimPeriodSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type surfaceRunoff(surfaceRunoffSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type GroundwaterRunoff(GroundwaterRunoffSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type PETw(PETwSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type Prec(PrecSEXP);
    rcpp_result_gen = Rcpp::wrap(routing(SimPeriod, surfaceRunoff, GroundwaterRunoff, PETw, Prec));
    return rcpp_result_gen;
END_RCPP
}
// CheckResType
void CheckResType();
RcppExport SEXP _WaterGAPLite_CheckResType() {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    CheckResType();
    return R_NilValue;
END_RCPP
}
// setLakeWetlandToMaximum
void setLakeWetlandToMaximum(NumericVector S_locLakeStorage, NumericVector S_locWetlandStorage, NumericVector S_gloLakeStorage, NumericVector S_ResStorage, NumericVector S_gloWetlandStorage);
RcppExport SEXP _WaterGAPLite_setLakeWetlandToMaximum(SEXP S_locLakeStorageSEXP, SEXP S_locWetlandStorageSEXP, SEXP S_gloLakeStorageSEXP, SEXP S_ResStorageSEXP, SEXP S_gloWetlandStorageSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type S_locLakeStorage(S_locLakeStorageSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type S_locWetlandStorage(S_locWetlandStorageSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type S_gloLakeStorage(S_gloLakeStorageSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type S_ResStorage(S_ResStorageSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type S_gloWetlandStorage(S_gloWetlandStorageSEXP);
    setLakeWetlandToMaximum(S_locLakeStorage, S_locWetlandStorage, S_gloLakeStorage, S_ResStorage, S_gloWetlandStorage);
    return R_NilValue;
END_RCPP
}
// routingRiver
double routingRiver(int cell, double riverVelocity, double RiverInflow, NumericVector G_riverOutflow, NumericVector S_river);
RcppExport SEXP _WaterGAPLite_routingRiver(SEXP cellSEXP, SEXP riverVelocitySEXP, SEXP RiverInflowSEXP, SEXP G_riverOutflowSEXP, SEXP S_riverSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type cell(cellSEXP);
    Rcpp::traits::input_parameter< double >::type riverVelocity(riverVelocitySEXP);
    Rcpp::traits::input_parameter< double >::type RiverInflow(RiverInflowSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type G_riverOutflow(G_riverOutflowSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type S_river(S_riverSEXP);
    rcpp_result_gen = Rcpp::wrap(routingRiver(cell, riverVelocity, RiverInflow, G_riverOutflow, S_river));
    return rcpp_result_gen;
END_RCPP
}
// getRiverVelocity
double getRiverVelocity(int Type, int cell, double inflow);
RcppExport SEXP _WaterGAPLite_getRiverVelocity(SEXP TypeSEXP, SEXP cellSEXP, SEXP inflowSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type Type(TypeSEXP);
    Rcpp::traits::input_parameter< int >::type cell(cellSEXP);
    Rcpp::traits::input_parameter< double >::type inflow(inflowSEXP);
    rcpp_result_gen = Rcpp::wrap(getRiverVelocity(Type, cell, inflow));
    return rcpp_result_gen;
END_RCPP
}
// runModel
List runModel(DateVector SimPeriod, List ListConst, NumericVector Settings, int nYears);
RcppExport SEXP _WaterGAPLite_runModel(SEXP SimPeriodSEXP, SEXP ListConstSEXP, SEXP SettingsSEXP, SEXP nYearsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< DateVector >::type SimPeriod(SimPeriodSEXP);
    Rcpp::traits::input_parameter< List >::type ListConst(ListConstSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type Settings(SettingsSEXP);
    Rcpp::traits::input_parameter< int >::type nYears(nYearsSEXP);
    rcpp_result_gen = Rcpp::wrap(runModel(SimPeriod, ListConst, Settings, nYears));
    return rcpp_result_gen;
END_RCPP
}
// tools_DefDrainageCells
IntegerVector tools_DefDrainageCells(int Outlet, IntegerVector GCRC, IntegerVector OutflowMatrix);
RcppExport SEXP _WaterGAPLite_tools_DefDrainageCells(SEXP OutletSEXP, SEXP GCRCSEXP, SEXP OutflowMatrixSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< int >::type Outlet(OutletSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type GCRC(GCRCSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type OutflowMatrix(OutflowMatrixSEXP);
    rcpp_result_gen = Rcpp::wrap(tools_DefDrainageCells(Outlet, GCRC, OutflowMatrix));
    return rcpp_result_gen;
END_RCPP
}
// tools_InterpolateValues
NumericVector tools_InterpolateValues(NumericVector VectorIn, NumericVector Table_x, NumericVector Table_y);
RcppExport SEXP _WaterGAPLite_tools_InterpolateValues(SEXP VectorInSEXP, SEXP Table_xSEXP, SEXP Table_ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< NumericVector >::type VectorIn(VectorInSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type Table_x(Table_xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type Table_y(Table_ySEXP);
    rcpp_result_gen = Rcpp::wrap(tools_InterpolateValues(VectorIn, Table_x, Table_y));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_WaterGAPLite_findNumberInVector", (DL_FUNC) &_WaterGAPLite_findNumberInVector, 2},
    {"_WaterGAPLite_findUniqueValues", (DL_FUNC) &_WaterGAPLite_findUniqueValues, 1},
    {"_WaterGAPLite_sortIt", (DL_FUNC) &_WaterGAPLite_sortIt, 1},
    {"_WaterGAPLite_sumVector", (DL_FUNC) &_WaterGAPLite_sumVector, 1},
    {"_WaterGAPLite_numberOfDaysInMonth", (DL_FUNC) &_WaterGAPLite_numberOfDaysInMonth, 2},
    {"_WaterGAPLite_numberOfDaysInYear", (DL_FUNC) &_WaterGAPLite_numberOfDaysInYear, 1},
    {"_WaterGAPLite_WaterUseConsumGW", (DL_FUNC) &_WaterGAPLite_WaterUseConsumGW, 3},
    {"_WaterGAPLite_WaterUseCalcMeanDemandDaily", (DL_FUNC) &_WaterGAPLite_WaterUseCalcMeanDemandDaily, 2},
    {"_WaterGAPLite_WaterUseCalcDaily", (DL_FUNC) &_WaterGAPLite_WaterUseCalcDaily, 8},
    {"_WaterGAPLite_createWaterBalance", (DL_FUNC) &_WaterGAPLite_createWaterBalance, 1},
    {"_WaterGAPLite_dailyEstimateLongwave", (DL_FUNC) &_WaterGAPLite_dailyEstimateLongwave, 4},
    {"_WaterGAPLite_dailyEstimateShortwave", (DL_FUNC) &_WaterGAPLite_dailyEstimateShortwave, 5},
    {"_WaterGAPLite_dailySnow", (DL_FUNC) &_WaterGAPLite_dailySnow, 9},
    {"_WaterGAPLite_routing", (DL_FUNC) &_WaterGAPLite_routing, 5},
    {"_WaterGAPLite_CheckResType", (DL_FUNC) &_WaterGAPLite_CheckResType, 0},
    {"_WaterGAPLite_setLakeWetlandToMaximum", (DL_FUNC) &_WaterGAPLite_setLakeWetlandToMaximum, 5},
    {"_WaterGAPLite_routingRiver", (DL_FUNC) &_WaterGAPLite_routingRiver, 5},
    {"_WaterGAPLite_getRiverVelocity", (DL_FUNC) &_WaterGAPLite_getRiverVelocity, 3},
    {"_WaterGAPLite_runModel", (DL_FUNC) &_WaterGAPLite_runModel, 4},
    {"_WaterGAPLite_tools_DefDrainageCells", (DL_FUNC) &_WaterGAPLite_tools_DefDrainageCells, 3},
    {"_WaterGAPLite_tools_InterpolateValues", (DL_FUNC) &_WaterGAPLite_tools_InterpolateValues, 3},
    {NULL, NULL, 0}
};

RcppExport void R_init_WaterGAPLite(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
