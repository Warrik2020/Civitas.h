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
        bool Begin(void* d, void* plan) const { void* args[] = { d, plan }; return CallValue<bool>("Begin", args, 2); }
        bool Cancel(void* d) const { void* args[] = { d }; return CallValue<bool>("Cancel", args, 1); }
        bool Redirect(void* d, void* goal) const { void* args[] = { d, goal }; return CallValue<bool>("Redirect", args, 2); }
        bool OrderAfterLanding(void* d, void* goal) const { void* args[] = { d, goal }; return CallValue<bool>("OrderAfterLanding", args, 2); }
        void* HullOf(void* d) const { void* args[] = { d }; return Call("HullOf", args, 1); }
        float BoardingProgress(void* d) const { void* args[] = { d }; return CallValue<float>("BoardingProgress", args, 1); }
        int TicksToAshore(void* d) const { void* args[] = { d }; return CallValue<int>("TicksToAshore", args, 1); }
        float TakeBleed(void* d) const { void* args[] = { d }; return CallValue<float>("TakeBleed", args, 1); }
        bool TickOwned(void* d) const { void* args[] = { d }; return CallValue<bool>("TickOwned", args, 1); }
        void PostNaval() const { Call("PostNaval", nullptr, 0); }
        void Forget(void* d) const { void* args[] = { d }; Call("Forget", args, 1); }
        void OnPeace(int a, int b) const { void* args[] = { &a, &b }; Call("OnPeace", args, 2); }
        void OnIntercepted(void* v, int attacker, float orgLoss, float bleedFracOfCap, int tick) const { void* args[] = { v, &attacker, &orgLoss, &bleedFracOfCap, &tick }; Call("OnIntercepted", args, 5); }
        void Clear() const { Call("Clear", nullptr, 0); }
        void Adopt(void* d) const { void* args[] = { d }; Call("Adopt", args, 1); }
        bool TryPlan(void* d, void* goal, void* into, int preferEmbarkTile = -1) const { void* args[] = { d, goal, into, &preferEmbarkTile }; return CallValue<bool>("TryPlan", args, 4); }
        void* TryPlanFrom(void** args = nullptr, int count = 0) const { return Call("TryPlanFrom", args, count); }
        bool MightShortcut(void* d, void* goal) const { void* args[] = { d, goal }; return CallValue<bool>("MightShortcut", args, 2); }
        bool ChooseSea(void* d, void* goal, void* into, bool& mustSail) const { void* args[] = { d, goal, into, &mustSail }; return CallValue<bool>("ChooseSea", args, 4); }
        bool AutoSail(void* d, void* goal, float landTicks) const { void* args[] = { d, goal, &landTicks }; return CallValue<bool>("AutoSail", args, 3); }
        float BoardMul(int t) const { void* args[] = { &t }; return CallStaticValue<float>("BoardMul", args, 1); }
        int EmbarkTicks(int nationId, int t, bool port) const { void* args[] = { &nationId, &t, &port }; return CallStaticValue<int>("EmbarkTicks", args, 3); }
        int DisembarkTicks(int nationId, int t, bool port, int kind) const { void* args[] = { &nationId, &t, &port, &kind }; return CallStaticValue<int>("DisembarkTicks", args, 4); }
        float TransportSpeed(int nationId) const { void* args[] = { &nationId }; return CallStaticValue<float>("TransportSpeed", args, 1); }
        void* TileCentre(void* grid, int tile) const { void* args[] = { grid, &tile }; return CallStatic("TileCentre", args, 2); }
        bool Classify(int nationId, int tile, int& kind, int& owner) const { void* args[] = { &nationId, &tile, &kind, &owner }; return CallValue<bool>("Classify", args, 4); }
        bool NeedsCrossing(void* d, void* goal) const { void* args[] = { d, goal }; return CallValue<bool>("NeedsCrossing", args, 2); }
        bool CanSail(int nationId) const { void* args[] = { &nationId }; return CallStaticValue<bool>("CanSail", args, 1); }
        bool ShortcutsEnabled() const { return ReadStaticField<bool>("ShortcutsEnabled"); }
        void SetShortcutsEnabled(bool value) const { WriteStaticField<bool>("ShortcutsEnabled", value); }
        bool Enabled() const { return ReadStaticField<bool>("Enabled"); }
        void SetEnabled(bool value) const { WriteStaticField<bool>("Enabled", value); }
        void* Preview() const { return ReadStaticField<void*>("Preview"); }
        void SetPreview(void* value) const { WriteStaticField<void*>("Preview", value); }
        int tile() const { return ReadField<int>("tile"); }
        void SetTile(int value) const { WriteField<int>("tile", value); }
        bool port() const { return ReadField<bool>("port"); }
        void SetPort(bool value) const { WriteField<bool>("port", value); }
        int portCity() const { return ReadField<int>("portCity"); }
        void SetPortCity(int value) const { WriteField<int>("portCity", value); }
        int kind() const { return ReadField<int>("kind"); }
        void SetKind(int value) const { WriteField<int>("kind", value); }
        int owner() const { return ReadField<int>("owner"); }
        void SetOwner(int value) const { WriteField<int>("owner", value); }
        int q() const { return ReadField<int>("q"); }
        void SetQ(int value) const { WriteField<int>("q", value); }
        int b() const { return ReadField<int>("b"); }
        void SetB(int value) const { WriteField<int>("b", value); }
        float cost() const { return ReadField<float>("cost"); }
        void SetCost(float value) const { WriteField<float>("cost", value); }
    };
}
