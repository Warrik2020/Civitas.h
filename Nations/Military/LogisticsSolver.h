#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Military
{
    class LogisticsSolver : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit LogisticsSolver(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military", "LogisticsSolver") {}
    public:
        float Exp(int key) const { void* __callArgs[] = { &key }; return CallStaticValue<float>("Exp", __callArgs, 1); }
        int OffsetOf(float s, float sMax) const { void* __callArgs[] = { &s, &sMax }; return CallStaticValue<int>("OffsetOf", __callArgs, 2); }
        int KeyMaxOf(float sMax) const { void* __callArgs[] = { &sMax }; return CallStaticValue<int>("KeyMaxOf", __callArgs, 1); }
        int CostIndex(uint8_t cls, int hard, int road) const { void* __callArgs[] = { &cls, &hard, &road }; return CallStaticValue<int>("CostIndex", __callArgs, 3); }
        int BuildCosts(int cellTiles, float rangeMul, void* orth, void* diag, void* bareOrth, void* bareDiag) const { void* __callArgs[] = { &cellTiles, &rangeMul, orth, diag, bareOrth, bareDiag }; return CallStaticValue<int>("BuildCosts", __callArgs, 6); }
        int Solve(void* f, void* cells, void* seeds, int seedCount, void* orth, void* diag, void* bareOrth, void* bareDiag, int maxStep) const { void* __callArgs[] = { f, cells, seeds, &seedCount, orth, diag, bareOrth, bareDiag, &maxStep }; return CallStaticValue<int>("Solve", __callArgs, 9); }
        int Begin(void* r) const { void* __callArgs[] = { r }; return CallStaticValue<int>("Begin", __callArgs, 1); }
        int Step(void* r, int budget) const { void* __callArgs[] = { r, &budget }; return CallStaticValue<int>("Step", __callArgs, 2); }
        void SortSeeds(void* a, int n) const { void* __callArgs[] = { a, &n }; CallStatic("SortSeeds", __callArgs, 2); }
        int KeyNone() const { return ReadStaticField<int>("KeyNone"); }
        int CostTableSize() const { return ReadStaticField<int>("CostTableSize"); }
    };
}
