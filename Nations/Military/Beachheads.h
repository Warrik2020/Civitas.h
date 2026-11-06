#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Military
{
    class Beachheads : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit Beachheads(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military", "Beachheads") {}
    public:
        void Clear() const { CallStatic("Clear", nullptr, 0); }
        void Add(int nationId, int anchorTile, int anchorWater, int targetNation, int tick, void* grid) const { void* args[] = { &nationId, &anchorTile, &anchorWater, &targetNation, &tick, grid }; CallStatic("Add", args, 6); }
        void Restore(void* b) const { void* args[] = { b }; CallStatic("Restore", args, 1); }
        void Prune(void* grid) const { void* args[] = { grid }; CallStatic("Prune", args, 1); }
        void AnchorsOf(int nationId, void* into) const { void* args[] = { &nationId, into }; CallStatic("AnchorsOf", args, 2); }
        bool Any(int nationId) const { void* args[] = { &nationId }; return CallStaticValue<bool>("Any", args, 1); }
        void Transfer(int from, int to) const { void* args[] = { &from, &to }; CallStatic("Transfer", args, 2); }
        void* AnchorPos(void* grid, void* b) const { void* args[] = { grid, &b }; return CallStatic("AnchorPos", args, 2); }
        int nationId() const { return ReadField<int>("nationId"); }
        void SetNationId(int value) const { WriteField<int>("nationId", value); }
        int anchorTile() const { return ReadField<int>("anchorTile"); }
        void SetAnchorTile(int value) const { WriteField<int>("anchorTile", value); }
        int anchorWater() const { return ReadField<int>("anchorWater"); }
        void SetAnchorWater(int value) const { WriteField<int>("anchorWater", value); }
        int targetNation() const { return ReadField<int>("targetNation"); }
        void SetTargetNation(int value) const { WriteField<int>("targetNation", value); }
        int createdTick() const { return ReadField<int>("createdTick"); }
        void SetCreatedTick(int value) const { WriteField<int>("createdTick", value); }
    };
}
