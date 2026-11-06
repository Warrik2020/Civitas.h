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
        float ThresholdFor(float scale, float years) const { void* args[] = { &scale, &years }; return CallStaticValue<float>("ThresholdFor", args, 2); }
        int64_t Key(int sector, int lo, int hi) const { void* args[] = { &sector, &lo, &hi }; return CallStaticValue<int64_t>("Key", args, 3); }
        bool TryGet(int sector, int lo, int hi, void* c) const { void* args[] = { &sector, &lo, &hi, &c }; return CallValue<bool>("TryGet", args, 4); }
        void Add(int x, int y, int rootA, int rootB, float mass, int owner) const { void* args[] = { &x, &y, &rootA, &rootB, &mass, &owner }; Call("Add", args, 6); }
        void AddTraffic(int x, int y, int rootA, int rootB, float amount, int owner) const { void* args[] = { &x, &y, &rootA, &rootB, &amount, &owner }; Call("AddTraffic", args, 6); }
        void AddMigration(int x, int y, int rootA, int rootB, float amount, int owner) const { void* args[] = { &x, &y, &rootA, &rootB, &amount, &owner }; Call("AddMigration", args, 6); }
        void CreditPushes(void* pushes, void* grid, float years) const { void* args[] = { pushes, grid, &years }; Call("CreditPushes", args, 3); }
        void SampleChunk(void* rt, void* grid, void* ctx, int chunk) const { void* args[] = { rt, grid, ctx, &chunk }; Call("SampleChunk", args, 4); }
        bool Advance(int chunks, int chunkCount, void* visit) const { void* args[] = { &chunks, &chunkCount, visit }; return CallValue<bool>("Advance", args, 3); }
        void Fold(int nowWorldTick, float ticksPerYear) const { void* args[] = { &nowWorldTick, &ticksPerYear }; Call("Fold", args, 2); }
        void Candidates(void* dst) const { void* args[] = { dst }; Call("Candidates", args, 1); }
        void ScalePair(int lo, int hi, int minSx, int minSy, int maxSx, int maxSy, int pad, float factor) const { void* args[] = { &lo, &hi, &minSx, &minSy, &maxSx, &maxSy, &pad, &factor }; Call("ScalePair", args, 8); }
        void ForgetRoot(int root) const { void* args[] = { &root }; Call("ForgetRoot", args, 1); }
        float PairProgressNear(int lo, int hi, int minSx, int minSy, int maxSx, int maxSy) const { void* args[] = { &lo, &hi, &minSx, &minSy, &maxSx, &maxSy }; return CallValue<float>("PairProgressNear", args, 6); }
        void Restore(int sector, int lo, int hi, float score, int seenWorldTick, int ownerHint, float pushScore = 0f) const { void* args[] = { &sector, &lo, &hi, &score, &seenWorldTick, &ownerHint, &pushScore }; Call("Restore", args, 7); }
        void Clear() const { Call("Clear", nullptr, 0); }
        int axis() const { return ReadField<int>("axis"); }
        int sectorShift() const { return ReadField<int>("sectorShift"); }
        int sectorsWide() const { return ReadField<int>("sectorsWide"); }
        int sectorsHigh() const { return ReadField<int>("sectorsHigh"); }
        float scale() const { return ReadField<float>("scale"); }
        float threshold() const { return ReadField<float>("threshold"); }
        int sector() const { return ReadField<int>("sector"); }
        void SetSector(int value) const { WriteField<int>("sector", value); }
        int lo() const { return ReadField<int>("lo"); }
        void SetLo(int value) const { WriteField<int>("lo", value); }
        int hi() const { return ReadField<int>("hi"); }
        void SetHi(int value) const { WriteField<int>("hi", value); }
        float score() const { return ReadField<float>("score"); }
        void SetScore(float value) const { WriteField<float>("score", value); }
        float pending() const { return ReadField<float>("pending"); }
        void SetPending(float value) const { WriteField<float>("pending", value); }
        float traffic() const { return ReadField<float>("traffic"); }
        void SetTraffic(float value) const { WriteField<float>("traffic", value); }
        float pushScore() const { return ReadField<float>("pushScore"); }
        void SetPushScore(float value) const { WriteField<float>("pushScore", value); }
        float migration() const { return ReadField<float>("migration"); }
        void SetMigration(float value) const { WriteField<float>("migration", value); }
        int ownerHint() const { return ReadField<int>("ownerHint"); }
        void SetOwnerHint(int value) const { WriteField<int>("ownerHint", value); }
        float ownerHintMass() const { return ReadField<float>("ownerHintMass"); }
        void SetOwnerHintMass(float value) const { WriteField<float>("ownerHintMass", value); }
        int seenWorldTick() const { return ReadField<int>("seenWorldTick"); }
        void SetSeenWorldTick(int value) const { WriteField<int>("seenWorldTick", value); }
        int lo() const { return ReadField<int>("lo"); }
        void SetLo(int value) const { WriteField<int>("lo", value); }
        int hi() const { return ReadField<int>("hi"); }
        void SetHi(int value) const { WriteField<int>("hi", value); }
        int minSx() const { return ReadField<int>("minSx"); }
        void SetMinSx(int value) const { WriteField<int>("minSx", value); }
        int minSy() const { return ReadField<int>("minSy"); }
        void SetMinSy(int value) const { WriteField<int>("minSy", value); }
        int maxSx() const { return ReadField<int>("maxSx"); }
        void SetMaxSx(int value) const { WriteField<int>("maxSx", value); }
        int maxSy() const { return ReadField<int>("maxSy"); }
        void SetMaxSy(int value) const { WriteField<int>("maxSy", value); }
        float average() const { return ReadField<float>("average"); }
        void SetAverage(float value) const { WriteField<float>("average", value); }
        int ownerHint() const { return ReadField<int>("ownerHint"); }
        void SetOwnerHint(int value) const { WriteField<int>("ownerHint", value); }
        float pushShare() const { return ReadField<float>("pushShare"); }
        void SetPushShare(float value) const { WriteField<float>("pushShare", value); }
    };
}
