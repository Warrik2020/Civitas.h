#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Military
{
    class FrontlineAI : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit FrontlineAI(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military", "FrontlineAI") {}
    public:
        float AttackBar(void* mil, int tick) const { void* args[] = { mil, &tick }; return CallStaticValue<float>("AttackBar", args, 2); }
        void Evaluate(void* mil, void* n, void* grid, void* buckets, void* connectivity, void* cfg, int tick, void* milById = nullptr, void* cities = nullptr, void* supply = nullptr) const { void* args[] = { mil, n, grid, buckets, connectivity, cfg, &tick, milById, cities, supply }; CallStatic("Evaluate", args, 10); }
        void Reset(float size) const { void* args[] = { &size }; Call("Reset", args, 1); }
        int Cell(float v) const { void* args[] = { &v }; return CallValue<int>("Cell", args, 1); }
        void Add(void* p, int index) const { void* args[] = { p, &index }; Call("Add", args, 2); }
        void* At(int cx, int cy) const { void* args[] = { &cx, &cy }; return Call("At", args, 2); }
        int Compare(void* a, void* b) const { void* args[] = { a, b }; return CallValue<int>("Compare", args, 2); }
        int Compare(void* a, void* b) const { void* args[] = { a, b }; return CallValue<int>("Compare", args, 2); }
        int Compare(int x, int y) const { void* args[] = { &x, &y }; return CallValue<int>("Compare", args, 2); }
        int Compare(void* a, void* b) const { void* args[] = { a, b }; return CallValue<int>("Compare", args, 2); }
        int comp() const { return ReadField<int>("comp"); }
        void SetComp(int value) const { WriteField<int>("comp", value); }
        bool pocket() const { return ReadField<bool>("pocket"); }
        void SetPocket(bool value) const { WriteField<bool>("pocket", value); }
        bool wildcard() const { return ReadField<bool>("wildcard"); }
        void SetWildcard(bool value) const { WriteField<bool>("wildcard", value); }
        float pressure() const { return ReadField<float>("pressure"); }
        void SetPressure(float value) const { WriteField<float>("pressure", value); }
        float opposing() const { return ReadField<float>("opposing"); }
        void SetOpposing(float value) const { WriteField<float>("opposing", value); }
        int srcTick() const { return ReadField<int>("srcTick"); }
        void SetSrcTick(int value) const { WriteField<int>("srcTick", value); }
        bool critical() const { return ReadField<bool>("critical"); }
        void SetCritical(bool value) const { WriteField<bool>("critical", value); }
        float value() const { return ReadField<float>("value"); }
        void SetValue(float value) const { WriteField<float>("value", value); }
        float objective() const { return ReadField<float>("objective"); }
        void SetObjective(float value) const { WriteField<float>("objective", value); }
        bool hasObjective() const { return ReadField<bool>("hasObjective"); }
        void SetHasObjective(bool value) const { WriteField<bool>("hasObjective", value); }
        void* objectiveDir() const { return ReadField<void*>("objectiveDir"); }
        void SetObjectiveDir(void* value) const { WriteField<void*>("objectiveDir", value); }
        void* pos() const { return ReadField<void*>("pos"); }
        void SetPos(void* value) const { WriteField<void*>("pos", value); }
        float weight() const { return ReadField<float>("weight"); }
        void SetWeight(float value) const { WriteField<float>("weight", value); }
        int warIndex() const { return ReadField<int>("warIndex"); }
        void SetWarIndex(int value) const { WriteField<int>("warIndex", value); }
        int64_t cell() const { return ReadField<int64_t>("cell"); }
        void SetCell(int64_t value) const { WriteField<int64_t>("cell", value); }
        void* home() const { return ReadField<void*>("home"); }
        void SetHome(void* value) const { WriteField<void*>("home", value); }
        bool ok() const { return ReadField<bool>("ok"); }
        void SetOk(bool value) const { WriteField<bool>("ok", value); }
        void* pos() const { return ReadField<void*>("pos"); }
        void SetPos(void* value) const { WriteField<void*>("pos", value); }
        void* aim() const { return ReadField<void*>("aim"); }
        void SetAim(void* value) const { WriteField<void*>("aim", value); }
        void* outward() const { return ReadField<void*>("outward"); }
        void SetOutward(void* value) const { WriteField<void*>("outward", value); }
        int comp() const { return ReadField<int>("comp"); }
        void SetComp(int value) const { WriteField<int>("comp", value); }
        bool war() const { return ReadField<bool>("war"); }
        void SetWar(bool value) const { WriteField<bool>("war", value); }
        bool hunt() const { return ReadField<bool>("hunt"); }
        void SetHunt(bool value) const { WriteField<bool>("hunt", value); }
        bool guest() const { return ReadField<bool>("guest"); }
        void SetGuest(bool value) const { WriteField<bool>("guest", value); }
        bool claimed() const { return ReadField<bool>("claimed"); }
        void SetClaimed(bool value) const { WriteField<bool>("claimed", value); }
        void* tier() const { return ReadField<void*>("tier"); }
        void SetTier(void* value) const { WriteField<void*>("tier", value); }
        void* holder() const { return ReadField<void*>("holder"); }
        void SetHolder(void* value) const { WriteField<void*>("holder", value); }
        int tile() const { return ReadField<int>("tile"); }
        void SetTile(int value) const { WriteField<int>("tile", value); }
        bool exploit() const { return ReadField<bool>("exploit"); }
        void SetExploit(bool value) const { WriteField<bool>("exploit", value); }
        bool wildcard() const { return ReadField<bool>("wildcard"); }
        void SetWildcard(bool value) const { WriteField<bool>("wildcard", value); }
        float pressure() const { return ReadField<float>("pressure"); }
        void SetPressure(float value) const { WriteField<float>("pressure", value); }
        float opposing() const { return ReadField<float>("opposing"); }
        void SetOpposing(float value) const { WriteField<float>("opposing", value); }
        float value() const { return ReadField<float>("value"); }
        void SetValue(float value) const { WriteField<float>("value", value); }
        float objective() const { return ReadField<float>("objective"); }
        void SetObjective(float value) const { WriteField<float>("objective", value); }
        float rank() const { return ReadField<float>("rank"); }
        void SetRank(float value) const { WriteField<float>("rank", value); }
    };
}
