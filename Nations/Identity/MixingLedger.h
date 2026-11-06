#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Identity
{
    class MixingLedger : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit MixingLedger(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Identity", "MixingLedger") {}
    public:
        float ThresholdFor(float scale, float years) const { void* __callArgs[] = { &scale, &years }; return CallStaticValue<float>("ThresholdFor", __callArgs, 2); }
        int64_t Key(int sector, int lo, int hi) const { void* __callArgs[] = { &sector, &lo, &hi }; return CallStaticValue<int64_t>("Key", __callArgs, 3); }
        bool TryGet(int sector, int lo, int hi, void* c) const { void* __callArgs[] = { &sector, &lo, &hi, &c }; return CallValue<bool>("TryGet", __callArgs, 4); }
        void Add(int x, int y, int rootA, int rootB, float mass, int owner) const { void* __callArgs[] = { &x, &y, &rootA, &rootB, &mass, &owner }; Call("Add", __callArgs, 6); }
        void AddTraffic(int x, int y, int rootA, int rootB, float amount, int owner) const { void* __callArgs[] = { &x, &y, &rootA, &rootB, &amount, &owner }; Call("AddTraffic", __callArgs, 6); }
        void AddMigration(int x, int y, int rootA, int rootB, float amount, int owner) const { void* __callArgs[] = { &x, &y, &rootA, &rootB, &amount, &owner }; Call("AddMigration", __callArgs, 6); }
        void CreditPushes(void* pushes, void* grid, float years) const { void* __callArgs[] = { pushes, grid, &years }; Call("CreditPushes", __callArgs, 3); }
        void SampleChunk(void* rt, void* grid, void* ctx, int chunk) const { void* __callArgs[] = { rt, grid, ctx, &chunk }; Call("SampleChunk", __callArgs, 4); }
        bool Advance(int chunks, int chunkCount, void* visit) const { void* __callArgs[] = { &chunks, &chunkCount, visit }; return CallValue<bool>("Advance", __callArgs, 3); }
        void Fold(int nowWorldTick, float ticksPerYear) const { void* __callArgs[] = { &nowWorldTick, &ticksPerYear }; Call("Fold", __callArgs, 2); }
        void Candidates(void* dst) const { void* __callArgs[] = { dst }; Call("Candidates", __callArgs, 1); }
        void ScalePair(int lo, int hi, int minSx, int minSy, int maxSx, int maxSy, int pad, float factor) const { void* __callArgs[] = { &lo, &hi, &minSx, &minSy, &maxSx, &maxSy, &pad, &factor }; Call("ScalePair", __callArgs, 8); }
        void ForgetRoot(int root) const { void* __callArgs[] = { &root }; Call("ForgetRoot", __callArgs, 1); }
        float PairProgressNear(int lo, int hi, int minSx, int minSy, int maxSx, int maxSy) const { void* __callArgs[] = { &lo, &hi, &minSx, &minSy, &maxSx, &maxSy }; return CallValue<float>("PairProgressNear", __callArgs, 6); }
        void Restore(int sector, int lo, int hi, float score, int seenWorldTick, int ownerHint, float pushScore = 0.0f) const { void* __callArgs[] = { &sector, &lo, &hi, &score, &seenWorldTick, &ownerHint, &pushScore }; Call("Restore", __callArgs, 7); }
        void Clear() const { Call("Clear", nullptr, 0); }
        int axis() const { return ReadField<int>("axis"); }
        int sectorShift() const { return ReadField<int>("sectorShift"); }
        int sectorsWide() const { return ReadField<int>("sectorsWide"); }
        int sectorsHigh() const { return ReadField<int>("sectorsHigh"); }
        float scale() const { return ReadField<float>("scale"); }
        float threshold() const { return ReadField<float>("threshold"); }
    };
}
