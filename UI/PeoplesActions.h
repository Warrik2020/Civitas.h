#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class PeoplesActions : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit PeoplesActions(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "PeoplesActions") {}
    public:
        bool IsPersecuted(void* c, int people, int axis) const { void* __callArgs[] = { &c, &people, &axis }; return CallStaticValue<bool>("IsPersecuted", __callArgs, 3); }
        void* Persecution(void* c, int axis, int people) const { void* __callArgs[] = { &c, &axis, &people }; return CallStatic("Persecution", __callArgs, 3); }
        void* TogglePersecution(void* c, int axis, int people) const { void* __callArgs[] = { &c, &axis, &people }; return CallStatic("TogglePersecution", __callArgs, 3); }
        bool IsKindred(void* c, int people, int axis) const { void* __callArgs[] = { &c, &people, &axis }; return CallStaticValue<bool>("IsKindred", __callArgs, 3); }
        void* RelationLine(void* c, int people, int axis) const { void* __callArgs[] = { &c, &people, &axis }; return CallStatic("RelationLine", __callArgs, 3); }
        void* Kindred(void* c, int axis, int people) const { void* __callArgs[] = { &c, &axis, &people }; return CallStatic("Kindred", __callArgs, 3); }
        void* ToggleKindred(void* c, int axis, int people) const { void* __callArgs[] = { &c, &axis, &people }; return CallStatic("ToggleKindred", __callArgs, 3); }
        void* MixingLine(void* c, int axis) const { void* __callArgs[] = { &c, &axis }; return CallStatic("MixingLine", __callArgs, 2); }
        void* FormingLine(void* c, int axis) const { void* __callArgs[] = { &c, &axis }; return CallStatic("FormingLine", __callArgs, 2); }
        void* FormingLineOf(void* c, int axis, int root) const { void* __callArgs[] = { &c, &axis, &root }; return CallStatic("FormingLineOf", __callArgs, 3); }
        void* Rename(void* c, int groupId, const char* name) const { void* managed_2 = Api() && Api()->NewString ? Api()->NewString(name ? name : "") : nullptr; void* __callArgs[] = { &c, &groupId, managed_2 }; return CallStatic("Rename", __callArgs, 3); }
        void* BirthLine(void* c, void* g) const { void* __callArgs[] = { &c, g }; return CallStatic("BirthLine", __callArgs, 2); }
        void SetOpenCount(int axis) const { void* __callArgs[] = { &axis }; CallStatic("SetOpenCount", __callArgs, 1); }
        void* CountName(int axis) const { void* __callArgs[] = { &axis }; return CallStatic("CountName", __callArgs, 1); }
        void* CountWord(int axis) const { void* __callArgs[] = { &axis }; return CallStatic("CountWord", __callArgs, 1); }
        void* RungWord(int t) const { void* __callArgs[] = { &t }; return CallStatic("RungWord", __callArgs, 1); }
        void* RungBlurb(int t, int axis) const { void* __callArgs[] = { &t, &axis }; return CallStatic("RungBlurb", __callArgs, 2); }
        void* PeopleName(void* c, int key, int axis) const { void* __callArgs[] = { &c, &key, &axis }; return CallStatic("PeopleName", __callArgs, 3); }
        int AssimilationOf(void* c, int axis) const { void* __callArgs[] = { &c, &axis }; return CallStaticValue<int>("AssimilationOf", __callArgs, 2); }
        void* Assimilation(void* c, int axis, int scope) const { void* __callArgs[] = { &c, &axis, &scope }; return CallStatic("Assimilation", __callArgs, 3); }
        void* SetAssimilation(void* c, int axis, int scope) const { void* __callArgs[] = { &c, &axis, &scope }; return CallStatic("SetAssimilation", __callArgs, 3); }
        bool GuardOn(void* c, int axis) const { void* __callArgs[] = { &c, &axis }; return CallStaticValue<bool>("GuardOn", __callArgs, 2); }
        void* Guard(void* c, int axis) const { void* __callArgs[] = { &c, &axis }; return CallStatic("Guard", __callArgs, 2); }
        void* ToggleGuard(void* c, int axis) const { void* __callArgs[] = { &c, &axis }; return CallStatic("ToggleGuard", __callArgs, 2); }
        int ZoneTiles(void* c, int axis) const { void* __callArgs[] = { &c, &axis }; return CallStaticValue<int>("ZoneTiles", __callArgs, 2); }
        void* DrawZone(void* c, int axis, bool erase) const { void* __callArgs[] = { &c, &axis, &erase }; return CallStatic("DrawZone", __callArgs, 3); }
        void* ClearZone(void* c, int axis) const { void* __callArgs[] = { &c, &axis }; return CallStatic("ClearZone", __callArgs, 2); }
        void* DoClearZone(void* c, int axis) const { void* __callArgs[] = { &c, &axis }; return CallStatic("DoClearZone", __callArgs, 2); }
        void* ZoneUsageNote(void* c, int axis) const { void* __callArgs[] = { &c, &axis }; return CallStatic("ZoneUsageNote", __callArgs, 2); }
        int HarshestZoneRung(void* c, int axis) const { void* __callArgs[] = { &c, &axis }; return CallStaticValue<int>("HarshestZoneRung", __callArgs, 2); }
        int CurrentRung(void* c, int people, int axis, int layer) const { void* __callArgs[] = { &c, &people, &axis, &layer }; return CallStaticValue<int>("CurrentRung", __callArgs, 4); }
        void* Rung(void* c, int people, int axis, int layer, int t) const { void* __callArgs[] = { &c, &people, &axis, &layer, &t }; return CallStatic("Rung", __callArgs, 5); }
        void* SetRung(void* c, int people, int axis, int layer, int t) const { void* __callArgs[] = { &c, &people, &axis, &layer, &t }; return CallStatic("SetRung", __callArgs, 5); }
        void* Summary(void* c, int people, int axis) const { void* __callArgs[] = { &c, &people, &axis }; return CallStatic("Summary", __callArgs, 3); }
        void* LadderWhy(void* c, int people, int axis) const { void* __callArgs[] = { &c, &people, &axis }; return CallStatic("LadderWhy", __callArgs, 3); }
        void* SlotsLine(void* c, int axis) const { void* __callArgs[] = { &c, &axis }; return CallStatic("SlotsLine", __callArgs, 2); }
        void* CoOfficial(void* c, int axis, int people) const { void* __callArgs[] = { &c, &axis, &people }; return CallStatic("CoOfficial", __callArgs, 3); }
        void* ToggleCoOfficial(void* c, int axis, int people) const { void* __callArgs[] = { &c, &axis, &people }; return CallStatic("ToggleCoOfficial", __callArgs, 3); }
        int ListOrders(void* c, void* dst) const { void* __callArgs[] = { &c, dst }; return CallStaticValue<int>("ListOrders", __callArgs, 2); }
        void* OrderLine(void* c, void* s) const { void* __callArgs[] = { &c, &s }; return CallStatic("OrderLine", __callArgs, 2); }
        void* OrderProgress(void* s) const { void* __callArgs[] = { &s }; return CallStatic("OrderProgress", __callArgs, 1); }
        void* CallOff(void* c, int people, int axis) const { void* __callArgs[] = { &c, &people, &axis }; return CallStatic("CallOff", __callArgs, 3); }
        void* BillOf(void* c, int axis) const { void* __callArgs[] = { &c, &axis }; return CallStatic("BillOf", __callArgs, 2); }
        void* ToggleConsecration(void* c, int owner, void* stateTiles, bool lift) const { void* __callArgs[] = { &c, &owner, stateTiles, &lift }; return CallStatic("ToggleConsecration", __callArgs, 4); }
        int PackGroup(int groupId, int axis) const { void* __callArgs[] = { &groupId, &axis }; return CallStaticValue<int>("PackGroup", __callArgs, 2); }
        void UnpackGroup(int arg, int& groupId, int& axis) const { void* __callArgs[] = { &arg, &groupId, &axis }; CallStatic("UnpackGroup", __callArgs, 3); }
        void* QuickOrders() const { return ReadStaticField<void*>("QuickOrders"); }
    };
}
