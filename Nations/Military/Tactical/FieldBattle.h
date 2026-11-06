#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Tactical
{
    class FieldBattle : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit FieldBattle(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Tactical", "FieldBattle") {}
    public:
        bool Holds(void* d) const { void* args[] = { d }; return CallStaticValue<bool>("Holds", args, 1); }
        void* MemberOf(int divisionId) const { void* args[] = { &divisionId }; return Call("MemberOf", args, 1); }
        void* MemberByFight(int fightIndex) const { void* args[] = { &fightIndex }; return Call("MemberByFight", args, 1); }
        void* LocalToTile(void* metres) const { void* args[] = { metres }; return Call("LocalToTile", args, 1); }
        void* TileToLocal(void* tile) const { void* args[] = { tile }; return Call("TileToLocal", args, 1); }
        int SideOfNation(int nationId) const { void* args[] = { &nationId }; return CallValue<int>("SideOfNation", args, 1); }
        bool IsControllableBat(int bat) const { void* args[] = { &bat }; return CallValue<bool>("IsControllableBat", args, 1); }
        void Leave() const { Call("Leave", nullptr, 0); }
        void TakeCommand() const { Call("TakeCommand", nullptr, 0); }
        bool IsAuto(int fightIndex) const { void* args[] = { &fightIndex }; return CallValue<bool>("IsAuto", args, 1); }
        void SetAuto(int fightIndex, bool on) const { void* args[] = { &fightIndex, &on }; Call("SetAuto", args, 2); }
        bool TryContest(int grower, int holder, int tileIndex, float pushMax, float& factor) const { void* args[] = { &grower, &holder, &tileIndex, &pushMax, &factor }; return CallStaticValue<bool>("TryContest", args, 5); }
        void FlushForSave() const { CallStatic("FlushForSave", nullptr, 0); }
        void DissolveNow() const { CallStatic("DissolveNow", nullptr, 0); }
    };
}
