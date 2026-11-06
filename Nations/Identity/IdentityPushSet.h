#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Identity
{
    class IdentityPushSet : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit IdentityPushSet(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Identity", "IdentityPushSet") {}
    public:
        void Clear() const { Call("Clear", nullptr, 0); }
        bool InjectForTests(void* p) const { void* __callArgs[] = { &p }; return CallValue<bool>("InjectForTests", __callArgs, 1); }
        void ClearStats() const { Call("ClearStats", nullptr, 0); }
        int CountOf(int kind) const { void* __callArgs[] = { &kind }; return CallValue<int>("CountOf", __callArgs, 1); }
        bool Touches(int chunk) const { void* __callArgs[] = { &chunk }; return CallValue<bool>("Touches", __callArgs, 1); }
        void RangeOf(int chunk, int& lo, int& hi) const { void* __callArgs[] = { &chunk, &lo, &hi }; Call("RangeOf", __callArgs, 3); }
        float Boost(int lo, int hi, int attacker, int defender, int x, int y) const { void* __callArgs[] = { &lo, &hi, &attacker, &defender, &x, &y }; return CallValue<float>("Boost", __callArgs, 6); }
        bool Covers(int lo, int hi, int x, int y) const { void* __callArgs[] = { &lo, &hi, &x, &y }; return CallValue<bool>("Covers", __callArgs, 4); }
        void Plan(int axis, void* rt, void* grid, void* cfg, void* ctx, int tick, float ticksPerYear) const { void* __callArgs[] = { &axis, rt, grid, cfg, ctx, &tick, &ticksPerYear }; Call("Plan", __callArgs, 7); }
        int MaxPushes() const { return ReadStaticField<int>("MaxPushes"); }
        bool Enabled() const { return ReadStaticField<bool>("Enabled"); }
        void Enabled(bool value) const { WriteStaticField<bool>("Enabled", value); }
        int launchedSpear() const { return ReadField<int>("launchedSpear"); }
        void launchedSpear(int value) const { WriteField<int>("launchedSpear", value); }
        int launchedWave() const { return ReadField<int>("launchedWave"); }
        void launchedWave(int value) const { WriteField<int>("launchedWave", value); }
        int launchedEncircle() const { return ReadField<int>("launchedEncircle"); }
        void launchedEncircle(int value) const { WriteField<int>("launchedEncircle", value); }
        int closed() const { return ReadField<int>("closed"); }
        void closed(int value) const { WriteField<int>("closed", value); }
        int endedReached() const { return ReadField<int>("endedReached"); }
        void endedReached(int value) const { WriteField<int>("endedReached", value); }
        int endedStalled() const { return ReadField<int>("endedStalled"); }
        void endedStalled(int value) const { WriteField<int>("endedStalled", value); }
        int endedExpired() const { return ReadField<int>("endedExpired"); }
        void endedExpired(int value) const { WriteField<int>("endedExpired", value); }
        float endedDepthSum() const { return ReadField<float>("endedDepthSum"); }
        void endedDepthSum(float value) const { WriteField<float>("endedDepthSum", value); }
        int64_t endedLifeTicks() const { return ReadField<int64_t>("endedLifeTicks"); }
        void endedLifeTicks(int64_t value) const { WriteField<int64_t>("endedLifeTicks", value); }
    };
}
