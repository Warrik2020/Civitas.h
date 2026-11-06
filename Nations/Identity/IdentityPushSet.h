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
        bool InjectForTests(void* p) const { void* args[] = { &p }; return CallValue<bool>("InjectForTests", args, 1); }
        void ClearStats() const { Call("ClearStats", nullptr, 0); }
        int CountOf(int kind) const { void* args[] = { &kind }; return CallValue<int>("CountOf", args, 1); }
        bool Touches(int chunk) const { void* args[] = { &chunk }; return CallValue<bool>("Touches", args, 1); }
        void RangeOf(int chunk, int& lo, int& hi) const { void* args[] = { &chunk, &lo, &hi }; Call("RangeOf", args, 3); }
        float Boost(int lo, int hi, int attacker, int defender, int x, int y) const { void* args[] = { &lo, &hi, &attacker, &defender, &x, &y }; return CallValue<float>("Boost", args, 6); }
        bool Covers(int lo, int hi, int x, int y) const { void* args[] = { &lo, &hi, &x, &y }; return CallValue<bool>("Covers", args, 4); }
        void Plan(int axis, void* rt, void* grid, void* cfg, void* ctx, int tick, float ticksPerYear) const { void* args[] = { &axis, rt, grid, cfg, ctx, &tick, &ticksPerYear }; Call("Plan", args, 7); }
        int MaxPushes() const { return ReadStaticField<int>("MaxPushes"); }
        bool Enabled() const { return ReadStaticField<bool>("Enabled"); }
        void SetEnabled(bool value) const { WriteStaticField<bool>("Enabled", value); }
        int launchedSpear() const { return ReadField<int>("launchedSpear"); }
        void SetLaunchedSpear(int value) const { WriteField<int>("launchedSpear", value); }
        int launchedWave() const { return ReadField<int>("launchedWave"); }
        void SetLaunchedWave(int value) const { WriteField<int>("launchedWave", value); }
        int launchedEncircle() const { return ReadField<int>("launchedEncircle"); }
        void SetLaunchedEncircle(int value) const { WriteField<int>("launchedEncircle", value); }
        int closed() const { return ReadField<int>("closed"); }
        void SetClosed(int value) const { WriteField<int>("closed", value); }
        int endedReached() const { return ReadField<int>("endedReached"); }
        void SetEndedReached(int value) const { WriteField<int>("endedReached", value); }
        int endedStalled() const { return ReadField<int>("endedStalled"); }
        void SetEndedStalled(int value) const { WriteField<int>("endedStalled", value); }
        int endedExpired() const { return ReadField<int>("endedExpired"); }
        void SetEndedExpired(int value) const { WriteField<int>("endedExpired", value); }
        float endedDepthSum() const { return ReadField<float>("endedDepthSum"); }
        void SetEndedDepthSum(float value) const { WriteField<float>("endedDepthSum", value); }
        int64_t endedLifeTicks() const { return ReadField<int64_t>("endedLifeTicks"); }
        void SetEndedLifeTicks(int64_t value) const { WriteField<int64_t>("endedLifeTicks", value); }
    };
}
