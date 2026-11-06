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
        float Exp(int key) const { void* args[] = { &key }; return CallStaticValue<float>("Exp", args, 1); }
        int OffsetOf(float s, float sMax) const { void* args[] = { &s, &sMax }; return CallStaticValue<int>("OffsetOf", args, 2); }
        int KeyMaxOf(float sMax) const { void* args[] = { &sMax }; return CallStaticValue<int>("KeyMaxOf", args, 1); }
        int CostIndex(uint8_t cls, int hard, int road) const { void* args[] = { &cls, &hard, &road }; return CallStaticValue<int>("CostIndex", args, 3); }
        int BuildCosts(int cellTiles, float rangeMul, void* orth, void* diag, void* bareOrth, void* bareDiag) const { void* args[] = { &cellTiles, &rangeMul, orth, diag, bareOrth, bareDiag }; return CallStaticValue<int>("BuildCosts", args, 6); }
        int Solve(void* f, void* cells, void* seeds, int seedCount, void* orth, void* diag, void* bareOrth, void* bareDiag, int maxStep) const { void* args[] = { f, cells, seeds, &seedCount, orth, diag, bareOrth, bareDiag, &maxStep }; return CallStaticValue<int>("Solve", args, 9); }
        int Begin(void* r) const { void* args[] = { r }; return CallStaticValue<int>("Begin", args, 1); }
        int Step(void* r, int budget) const { void* args[] = { r, &budget }; return CallStaticValue<int>("Step", args, 2); }
        void SortSeeds(void* a, int n) const { void* args[] = { a, &n }; CallStatic("SortSeeds", args, 2); }
        int KeyNone() const { return ReadStaticField<int>("KeyNone"); }
        int CostTableSize() const { return ReadStaticField<int>("CostTableSize"); }
        int local() const { return ReadField<int>("local"); }
        void SetLocal(int value) const { WriteField<int>("local", value); }
        int offset() const { return ReadField<int>("offset"); }
        void SetOffset(int value) const { WriteField<int>("offset", value); }
        int16_t source() const { return ReadField<int16_t>("source"); }
        void SetSource(int16_t value) const { WriteField<int16_t>("source", value); }
        void* f() const { return ReadField<void*>("f"); }
        void SetF(void* value) const { WriteField<void*>("f", value); }
        void* cells() const { return ReadField<void*>("cells"); }
        void SetCells(void* value) const { WriteField<void*>("cells", value); }
        void* seeds() const { return ReadField<void*>("seeds"); }
        void SetSeeds(void* value) const { WriteField<void*>("seeds", value); }
        int seedCount() const { return ReadField<int>("seedCount"); }
        void SetSeedCount(int value) const { WriteField<int>("seedCount", value); }
        void* orth() const { return ReadField<void*>("orth"); }
        void SetOrth(void* value) const { WriteField<void*>("orth", value); }
        void* diag() const { return ReadField<void*>("diag"); }
        void SetDiag(void* value) const { WriteField<void*>("diag", value); }
        void* bareOrth() const { return ReadField<void*>("bareOrth"); }
        void SetBareOrth(void* value) const { WriteField<void*>("bareOrth", value); }
        void* bareDiag() const { return ReadField<void*>("bareDiag"); }
        void SetBareDiag(void* value) const { WriteField<void*>("bareDiag", value); }
        int maxStep() const { return ReadField<int>("maxStep"); }
        void SetMaxStep(int value) const { WriteField<int>("maxStep", value); }
        int cursor() const { return ReadField<int>("cursor"); }
        void SetCursor(int value) const { WriteField<int>("cursor", value); }
        int pending() const { return ReadField<int>("pending"); }
        void SetPending(int value) const { WriteField<int>("pending", value); }
        int si() const { return ReadField<int>("si"); }
        void SetSi(int value) const { WriteField<int>("si", value); }
        int settled() const { return ReadField<int>("settled"); }
        void SetSettled(int value) const { WriteField<int>("settled", value); }
        int mask() const { return ReadField<int>("mask"); }
        void SetMask(int value) const { WriteField<int>("mask", value); }
        bool done() const { return ReadField<bool>("done"); }
        void SetDone(bool value) const { WriteField<bool>("done", value); }
    };
}
