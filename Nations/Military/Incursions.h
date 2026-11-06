#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Military
{
    class Incursions : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit Incursions(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military", "Incursions") {}
    public:
        void Clear() const { CallStatic("Clear", nullptr, 0); }
        int64_t DirKey(int violator, int host) const { void* __callArgs[] = { &violator, &host }; return CallStaticValue<int64_t>("DirKey", __callArgs, 2); }
        int DirViolator(int64_t key) const { void* __callArgs[] = { &key }; return CallStaticValue<int>("DirViolator", __callArgs, 1); }
        int DirHost(int64_t key) const { void* __callArgs[] = { &key }; return CallStaticValue<int>("DirHost", __callArgs, 1); }
        int HostOf(void* d) const { void* __callArgs[] = { d }; return CallStaticValue<int>("HostOf", __callArgs, 1); }
        void* Check(void* d, int host, void* aim, void* grid, void* mil, bool sharesBorder) const { void* __callArgs[] = { d, &host, aim, grid, mil, &sharesBorder }; return CallStatic("Check", __callArgs, 6); }
        bool SharesBorder(void* mil, int host, void* grid) const { void* __callArgs[] = { mil, &host, grid }; return CallStaticValue<bool>("SharesBorder", __callArgs, 3); }
        void Authorize(void* d, int host) const { void* __callArgs[] = { d, &host }; CallStatic("Authorize", __callArgs, 2); }
        void Release(void* d) const { void* __callArgs[] = { d }; CallStatic("Release", __callArgs, 1); }
        bool SetStance(void* d, int stance) const { void* __callArgs[] = { d, &stance }; return CallStaticValue<bool>("SetStance", __callArgs, 2); }
        float FootprintRadius(void* d) const { void* __callArgs[] = { d }; return CallStaticValue<float>("FootprintRadius", __callArgs, 1); }
        bool Forages(void* d) const { void* __callArgs[] = { d }; return CallStaticValue<bool>("Forages", __callArgs, 1); }
        bool BeyondSupply(void* d) const { void* __callArgs[] = { d }; return CallStaticValue<bool>("BeyondSupply", __callArgs, 1); }
        bool LocksDown(void* d) const { void* __callArgs[] = { d }; return CallStaticValue<bool>("LocksDown", __callArgs, 1); }
        bool BoundForHost(void* d, void* grid) const { void* __callArgs[] = { d, grid }; return CallStaticValue<bool>("BoundForHost", __callArgs, 2); }
        void StampSupply(void* d, void* mil, void* grid, void* connectivity, int tick) const { void* __callArgs[] = { d, mil, grid, connectivity, &tick }; CallStatic("StampSupply", __callArgs, 5); }
        void RefreshAnchors(void* mil, void* grid, void* connectivity) const { void* __callArgs[] = { mil, grid, connectivity }; CallStatic("RefreshAnchors", __callArgs, 3); }
        float EstimateDepth(void* mil, void* grid, int tile, int host, float cap) const { void* __callArgs[] = { mil, grid, &tile, &host, &cap }; return CallStaticValue<float>("EstimateDepth", __callArgs, 5); }
        void SteerAtWar(void* mil, void* n, void* grid, void* connectivity) const { void* __callArgs[] = { mil, n, grid, connectivity }; CallStatic("SteerAtWar", __callArgs, 4); }
        bool Hostile(void* d, void* e) const { void* __callArgs[] = { d, e }; return CallStaticValue<bool>("Hostile", __callArgs, 2); }
        bool SkirmishActive(int violator, int host) const { void* __callArgs[] = { &violator, &host }; return CallStaticValue<bool>("SkirmishActive", __callArgs, 2); }
        bool Skirmishing(int a, int b) const { void* __callArgs[] = { &a, &b }; return CallStaticValue<bool>("Skirmishing", __callArgs, 2); }
        bool Attacking(int violator, int host) const { void* __callArgs[] = { &violator, &host }; return CallStaticValue<bool>("Attacking", __callArgs, 2); }
        void SetCounterDeploy(int host, int violator, bool on) const { void* __callArgs[] = { &host, &violator, &on }; CallStatic("SetCounterDeploy", __callArgs, 3); }
        void ClearCounterDeploy() const { CallStatic("ClearCounterDeploy", nullptr, 0); }
        void SetExcused(int violator, int host) const { void* __callArgs[] = { &violator, &host }; CallStatic("SetExcused", __callArgs, 2); }
        bool Excused(int violator, int host) const { void* __callArgs[] = { &violator, &host }; return CallStaticValue<bool>("Excused", __callArgs, 2); }
        bool CounterDeploying(int host, int violator) const { void* __callArgs[] = { &host, &violator }; return CallStaticValue<bool>("CounterDeploying", __callArgs, 2); }
        void NoteSkirmishLoss(int loser, int other, float men) const { void* __callArgs[] = { &loser, &other, &men }; CallStatic("NoteSkirmishLoss", __callArgs, 3); }
        void DrainSkirmishLosses(void* into) const { void* __callArgs[] = { into }; CallStatic("DrainSkirmishLosses", __callArgs, 1); }
        void DebugForceSkirmish(int violator, int host, bool on) const { void* __callArgs[] = { &violator, &host, &on }; CallStatic("DebugForceSkirmish", __callArgs, 3); }
        int OwnCount(int nationId) const { void* __callArgs[] = { &nationId }; return CallStaticValue<int>("OwnCount", __callArgs, 1); }
        int GuestCount(int nationId) const { void* __callArgs[] = { &nationId }; return CallStaticValue<int>("GuestCount", __callArgs, 1); }
        int CountAbroad(int occupier, int host) const { void* __callArgs[] = { &occupier, &host }; return CallStaticValue<int>("CountAbroad", __callArgs, 2); }
        void* Next(void* match, int afterId) const { void* __callArgs[] = { match, &afterId }; return CallStatic("Next", __callArgs, 2); }
        void Rebuild(void* militaries, void* milById, void* getNation, void* internals, void* grid) const { void* __callArgs[] = { militaries, milById, getNation, internals, grid }; CallStatic("Rebuild", __callArgs, 5); }
        bool Enabled() const { return ReadStaticField<bool>("Enabled"); }
        void Enabled(bool value) const { WriteStaticField<bool>("Enabled", value); }
    };
}
