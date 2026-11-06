#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Rendering
{
    class BattlefieldBalance : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit BattlefieldBalance(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Rendering", "BattlefieldBalance") {}
    public:
        float KmAcross(float tilePx) const { void* __callArgs[] = { &tilePx }; return CallStaticValue<float>("KmAcross", __callArgs, 1); }
        float DivisionGraphicsAlpha(float tilePx) const { void* __callArgs[] = { &tilePx }; return CallStaticValue<float>("DivisionGraphicsAlpha", __callArgs, 1); }
        float BorderYield(float tilePx) const { void* __callArgs[] = { &tilePx }; return CallStaticValue<float>("BorderYield", __callArgs, 1); }
        float CityYield(float tilePx) const { void* __callArgs[] = { &tilePx }; return CallStaticValue<float>("CityYield", __callArgs, 1); }
        float FxFineness(float tilePx) const { void* __callArgs[] = { &tilePx }; return CallStaticValue<float>("FxFineness", __callArgs, 1); }
        float ContactHidePx() const { return ReadStaticField<float>("ContactHidePx"); }
        float ContactFadePx() const { return ReadStaticField<float>("ContactFadePx"); }
        float ContactHysteresis() const { return ReadStaticField<float>("ContactHysteresis"); }
        float ContactBarThicknessTiles() const { return ReadStaticField<float>("ContactBarThicknessTiles"); }
        float ContactBarHalfLengthFactor() const { return ReadStaticField<float>("ContactBarHalfLengthFactor"); }
        float ContactBarGapTiles() const { return ReadStaticField<float>("ContactBarGapTiles"); }
        float ContactWinnerThickenMax() const { return ReadStaticField<float>("ContactWinnerThickenMax"); }
        float ContactMaxTiltFraction() const { return ReadStaticField<float>("ContactMaxTiltFraction"); }
        float ContactTiltSlewPerSecond() const { return ReadStaticField<float>("ContactTiltSlewPerSecond"); }
        int ContactBalanceSamplesPerFrame() const { return ReadStaticField<int>("ContactBalanceSamplesPerFrame"); }
        float ContactStubLengthTiles() const { return ReadStaticField<float>("ContactStubLengthTiles"); }
        float ContactStubMaxGapFraction() const { return ReadStaticField<float>("ContactStubMaxGapFraction"); }
        float ContactStubWidthTiles() const { return ReadStaticField<float>("ContactStubWidthTiles"); }
        uint8_t ContactStubAlpha() const { return ReadStaticField<uint8_t>("ContactStubAlpha"); }
        float ContactCoreSizeTiles() const { return ReadStaticField<float>("ContactCoreSizeTiles"); }
        float ContactPulseMaxScale() const { return ReadStaticField<float>("ContactPulseMaxScale"); }
        float ContactPulseHz() const { return ReadStaticField<float>("ContactPulseHz"); }
        int ContactPairCap() const { return ReadStaticField<int>("ContactPairCap"); }
        int ContactPairStaleFrames() const { return ReadStaticField<int>("ContactPairStaleFrames"); }
        float BattleIconRadiusPx() const { return ReadStaticField<float>("BattleIconRadiusPx"); }
        float BattleIconRimPx() const { return ReadStaticField<float>("BattleIconRimPx"); }
        float BattleIconRadiusTiles() const { return ReadStaticField<float>("BattleIconRadiusTiles"); }
        float BattleBarWidthPx() const { return ReadStaticField<float>("BattleBarWidthPx"); }
        float BattleBarHeightPx() const { return ReadStaticField<float>("BattleBarHeightPx"); }
        float BattleBarGapPx() const { return ReadStaticField<float>("BattleBarGapPx"); }
        float BattleIconHideTilePx() const { return ReadStaticField<float>("BattleIconHideTilePx"); }
        float BattleIconFadeTilePx() const { return ReadStaticField<float>("BattleIconFadeTilePx"); }
        float BattleIconHoverPx() const { return ReadStaticField<float>("BattleIconHoverPx"); }
        float SoldierFullTilePx() const { return ReadStaticField<float>("SoldierFullTilePx"); }
        float SoldierEnterTilePx() const { return ReadStaticField<float>("SoldierEnterTilePx"); }
        float VisibleTracerChance() const { return ReadStaticField<float>("VisibleTracerChance"); }
        float FxTilesPerMetre() const { return ReadStaticField<float>("FxTilesPerMetre"); }
        float GroundZoomFloorTiles() const { return ReadStaticField<float>("GroundZoomFloorTiles"); }
        float CounterYieldStartTilePx() const { return ReadStaticField<float>("CounterYieldStartTilePx"); }
        float CounterGoneTilePx() const { return ReadStaticField<float>("CounterGoneTilePx"); }
        float CounterYieldStartKm() const { return ReadStaticField<float>("CounterYieldStartKm"); }
        float CounterGoneKm() const { return ReadStaticField<float>("CounterGoneKm"); }
        float FxFineStartKm() const { return ReadStaticField<float>("FxFineStartKm"); }
        float FxFineFullKm() const { return ReadStaticField<float>("FxFineFullKm"); }
        float BorderYieldStartKm() const { return ReadStaticField<float>("BorderYieldStartKm"); }
        float BorderGoneKm() const { return ReadStaticField<float>("BorderGoneKm"); }
        float CityYieldStartKm() const { return ReadStaticField<float>("CityYieldStartKm"); }
        float CityGoneKm() const { return ReadStaticField<float>("CityGoneKm"); }
        float FxFineStartTilePx() const { return ReadStaticField<float>("FxFineStartTilePx"); }
        float FxFineFullTilePx() const { return ReadStaticField<float>("FxFineFullTilePx"); }
        float DivisionSmokeAlpha() const { return ReadStaticField<float>("DivisionSmokeAlpha"); }
        int FineShotsPerVolley() const { return ReadStaticField<int>("FineShotsPerVolley"); }
        int FineBurstsPerBurst() const { return ReadStaticField<int>("FineBurstsPerBurst"); }
        int FineShellsPerShell() const { return ReadStaticField<int>("FineShellsPerShell"); }
        int FineBlastsPerDeath() const { return ReadStaticField<int>("FineBlastsPerDeath"); }
    };
}
