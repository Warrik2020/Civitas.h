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
        bool Holds(void* d) const { void* __callArgs[] = { d }; return CallStaticValue<bool>("Holds", __callArgs, 1); }
        void* MemberOf(int divisionId) const { void* __callArgs[] = { &divisionId }; return Call("MemberOf", __callArgs, 1); }
        void* MemberByFight(int fightIndex) const { void* __callArgs[] = { &fightIndex }; return Call("MemberByFight", __callArgs, 1); }
        void* LocalToTile(void* metres) const { void* __callArgs[] = { metres }; return Call("LocalToTile", __callArgs, 1); }
        void* TileToLocal(void* tile) const { void* __callArgs[] = { tile }; return Call("TileToLocal", __callArgs, 1); }
        int SideOfNation(int nationId) const { void* __callArgs[] = { &nationId }; return CallValue<int>("SideOfNation", __callArgs, 1); }
        bool IsControllableBat(int bat) const { void* __callArgs[] = { &bat }; return CallValue<bool>("IsControllableBat", __callArgs, 1); }
        void Leave() const { Call("Leave", nullptr, 0); }
        void TakeCommand() const { Call("TakeCommand", nullptr, 0); }
        bool IsAuto(int fightIndex) const { void* __callArgs[] = { &fightIndex }; return CallValue<bool>("IsAuto", __callArgs, 1); }
        void SetAuto(int fightIndex, bool on) const { void* __callArgs[] = { &fightIndex, &on }; Call("SetAuto", __callArgs, 2); }
        bool TryContest(int grower, int holder, int tileIndex, float pushMax, float& factor) const { void* __callArgs[] = { &grower, &holder, &tileIndex, &pushMax, &factor }; return CallStaticValue<bool>("TryContest", __callArgs, 5); }
        void FlushForSave() const { CallStatic("FlushForSave", nullptr, 0); }
        void DissolveNow() const { CallStatic("DissolveNow", nullptr, 0); }
    };
}
