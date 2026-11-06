#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Military
{
    class NavalLift : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit NavalLift(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military", "NavalLift") {}
    public:
        bool Begin(void* d, void* plan) const { void* __callArgs[] = { d, plan }; return CallValue<bool>("Begin", __callArgs, 2); }
        bool Cancel(void* d) const { void* __callArgs[] = { d }; return CallValue<bool>("Cancel", __callArgs, 1); }
        bool Redirect(void* d, void* goal) const { void* __callArgs[] = { d, goal }; return CallValue<bool>("Redirect", __callArgs, 2); }
        bool OrderAfterLanding(void* d, void* goal) const { void* __callArgs[] = { d, goal }; return CallValue<bool>("OrderAfterLanding", __callArgs, 2); }
        void* HullOf(void* d) const { void* __callArgs[] = { d }; return Call("HullOf", __callArgs, 1); }
        float BoardingProgress(void* d) const { void* __callArgs[] = { d }; return CallValue<float>("BoardingProgress", __callArgs, 1); }
        int TicksToAshore(void* d) const { void* __callArgs[] = { d }; return CallValue<int>("TicksToAshore", __callArgs, 1); }
        float TakeBleed(void* d) const { void* __callArgs[] = { d }; return CallValue<float>("TakeBleed", __callArgs, 1); }
        bool TickOwned(void* d) const { void* __callArgs[] = { d }; return CallValue<bool>("TickOwned", __callArgs, 1); }
        void PostNaval() const { Call("PostNaval", nullptr, 0); }
        void Forget(void* d) const { void* __callArgs[] = { d }; Call("Forget", __callArgs, 1); }
        void OnPeace(int a, int b) const { void* __callArgs[] = { &a, &b }; Call("OnPeace", __callArgs, 2); }
        void OnIntercepted(void* v, int attacker, float orgLoss, float bleedFracOfCap, int tick) const { void* __callArgs[] = { v, &attacker, &orgLoss, &bleedFracOfCap, &tick }; Call("OnIntercepted", __callArgs, 5); }
        void Clear() const { Call("Clear", nullptr, 0); }
        void Adopt(void* d) const { void* __callArgs[] = { d }; Call("Adopt", __callArgs, 1); }
        bool TryPlan(void* d, void* goal, void* into, int preferEmbarkTile = -1) const { void* __callArgs[] = { d, goal, into, &preferEmbarkTile }; return CallValue<bool>("TryPlan", __callArgs, 4); }
        void* TryPlanFrom(void** args = nullptr, int count = 0) const { return Call("TryPlanFrom", args, count); }
        bool MightShortcut(void* d, void* goal) const { void* __callArgs[] = { d, goal }; return CallValue<bool>("MightShortcut", __callArgs, 2); }
        bool ChooseSea(void* d, void* goal, void* into, bool& mustSail) const { void* __callArgs[] = { d, goal, into, &mustSail }; return CallValue<bool>("ChooseSea", __callArgs, 4); }
        bool AutoSail(void* d, void* goal, float landTicks) const { void* __callArgs[] = { d, goal, &landTicks }; return CallValue<bool>("AutoSail", __callArgs, 3); }
        float BoardMul(int t) const { void* __callArgs[] = { &t }; return CallStaticValue<float>("BoardMul", __callArgs, 1); }
        int EmbarkTicks(int nationId, int t, bool port) const { void* __callArgs[] = { &nationId, &t, &port }; return CallStaticValue<int>("EmbarkTicks", __callArgs, 3); }
        int DisembarkTicks(int nationId, int t, bool port, int kind) const { void* __callArgs[] = { &nationId, &t, &port, &kind }; return CallStaticValue<int>("DisembarkTicks", __callArgs, 4); }
        float TransportSpeed(int nationId) const { void* __callArgs[] = { &nationId }; return CallStaticValue<float>("TransportSpeed", __callArgs, 1); }
        void* TileCentre(void* grid, int tile) const { void* __callArgs[] = { grid, &tile }; return CallStatic("TileCentre", __callArgs, 2); }
        bool Classify(int nationId, int tile, int& kind, int& owner) const { void* __callArgs[] = { &nationId, &tile, &kind, &owner }; return CallValue<bool>("Classify", __callArgs, 4); }
        bool NeedsCrossing(void* d, void* goal) const { void* __callArgs[] = { d, goal }; return CallValue<bool>("NeedsCrossing", __callArgs, 2); }
        bool CanSail(int nationId) const { void* __callArgs[] = { &nationId }; return CallStaticValue<bool>("CanSail", __callArgs, 1); }
        bool ShortcutsEnabled() const { return ReadStaticField<bool>("ShortcutsEnabled"); }
        void ShortcutsEnabled(bool value) const { WriteStaticField<bool>("ShortcutsEnabled", value); }
        bool Enabled() const { return ReadStaticField<bool>("Enabled"); }
        void Enabled(bool value) const { WriteStaticField<bool>("Enabled", value); }
        void* Preview() const { return ReadStaticField<void*>("Preview"); }
        void Preview(void* value) const { WriteStaticField<void*>("Preview", value); }
    };
}
