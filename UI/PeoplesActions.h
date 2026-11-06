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
        bool IsPersecuted(void* c, int people, int axis) const { void* args[] = { &c, &people, &axis }; return CallStaticValue<bool>("IsPersecuted", args, 3); }
        void* Persecution(void* c, int axis, int people) const { void* args[] = { &c, &axis, &people }; return CallStatic("Persecution", args, 3); }
        void* TogglePersecution(void* c, int axis, int people) const { void* args[] = { &c, &axis, &people }; return CallStatic("TogglePersecution", args, 3); }
        bool IsKindred(void* c, int people, int axis) const { void* args[] = { &c, &people, &axis }; return CallStaticValue<bool>("IsKindred", args, 3); }
        void* RelationLine(void* c, int people, int axis) const { void* args[] = { &c, &people, &axis }; return CallStatic("RelationLine", args, 3); }
        void* Kindred(void* c, int axis, int people) const { void* args[] = { &c, &axis, &people }; return CallStatic("Kindred", args, 3); }
        void* ToggleKindred(void* c, int axis, int people) const { void* args[] = { &c, &axis, &people }; return CallStatic("ToggleKindred", args, 3); }
        void* MixingLine(void* c, int axis) const { void* args[] = { &c, &axis }; return CallStatic("MixingLine", args, 2); }
        void* FormingLine(void* c, int axis) const { void* args[] = { &c, &axis }; return CallStatic("FormingLine", args, 2); }
        void* FormingLineOf(void* c, int axis, int root) const { void* args[] = { &c, &axis, &root }; return CallStatic("FormingLineOf", args, 3); }
        void* Rename(void* c, int groupId, const char* name) const { void* managed_2 = Api() && Api()->NewString ? Api()->NewString(name ? name : "") : nullptr; void* args[] = { &c, &groupId, managed_2 }; return CallStatic("Rename", args, 3); }
        void* BirthLine(void* c, void* g) const { void* args[] = { &c, g }; return CallStatic("BirthLine", args, 2); }
        void SetOpenCount(int axis) const { void* args[] = { &axis }; CallStatic("SetOpenCount", args, 1); }
        void* CountName(int axis) const { void* args[] = { &axis }; return CallStatic("CountName", args, 1); }
        void* CountWord(int axis) const { void* args[] = { &axis }; return CallStatic("CountWord", args, 1); }
        void* RungWord(int t) const { void* args[] = { &t }; return CallStatic("RungWord", args, 1); }
        void* RungBlurb(int t, int axis) const { void* args[] = { &t, &axis }; return CallStatic("RungBlurb", args, 2); }
        void* PeopleName(void* c, int key, int axis) const { void* args[] = { &c, &key, &axis }; return CallStatic("PeopleName", args, 3); }
        int AssimilationOf(void* c, int axis) const { void* args[] = { &c, &axis }; return CallStaticValue<int>("AssimilationOf", args, 2); }
        void* Assimilation(void* c, int axis, int scope) const { void* args[] = { &c, &axis, &scope }; return CallStatic("Assimilation", args, 3); }
        void* SetAssimilation(void* c, int axis, int scope) const { void* args[] = { &c, &axis, &scope }; return CallStatic("SetAssimilation", args, 3); }
        bool GuardOn(void* c, int axis) const { void* args[] = { &c, &axis }; return CallStaticValue<bool>("GuardOn", args, 2); }
        void* Guard(void* c, int axis) const { void* args[] = { &c, &axis }; return CallStatic("Guard", args, 2); }
        void* ToggleGuard(void* c, int axis) const { void* args[] = { &c, &axis }; return CallStatic("ToggleGuard", args, 2); }
        int ZoneTiles(void* c, int axis) const { void* args[] = { &c, &axis }; return CallStaticValue<int>("ZoneTiles", args, 2); }
        void* DrawZone(void* c, int axis, bool erase) const { void* args[] = { &c, &axis, &erase }; return CallStatic("DrawZone", args, 3); }
        void* ClearZone(void* c, int axis) const { void* args[] = { &c, &axis }; return CallStatic("ClearZone", args, 2); }
        void* DoClearZone(void* c, int axis) const { void* args[] = { &c, &axis }; return CallStatic("DoClearZone", args, 2); }
        void* ZoneUsageNote(void* c, int axis) const { void* args[] = { &c, &axis }; return CallStatic("ZoneUsageNote", args, 2); }
        int HarshestZoneRung(void* c, int axis) const { void* args[] = { &c, &axis }; return CallStaticValue<int>("HarshestZoneRung", args, 2); }
        int CurrentRung(void* c, int people, int axis, int layer) const { void* args[] = { &c, &people, &axis, &layer }; return CallStaticValue<int>("CurrentRung", args, 4); }
        void* Rung(void* c, int people, int axis, int layer, int t) const { void* args[] = { &c, &people, &axis, &layer, &t }; return CallStatic("Rung", args, 5); }
        void* SetRung(void* c, int people, int axis, int layer, int t) const { void* args[] = { &c, &people, &axis, &layer, &t }; return CallStatic("SetRung", args, 5); }
        void* Summary(void* c, int people, int axis) const { void* args[] = { &c, &people, &axis }; return CallStatic("Summary", args, 3); }
        void* LadderWhy(void* c, int people, int axis) const { void* args[] = { &c, &people, &axis }; return CallStatic("LadderWhy", args, 3); }
        void* SlotsLine(void* c, int axis) const { void* args[] = { &c, &axis }; return CallStatic("SlotsLine", args, 2); }
        void* CoOfficial(void* c, int axis, int people) const { void* args[] = { &c, &axis, &people }; return CallStatic("CoOfficial", args, 3); }
        void* ToggleCoOfficial(void* c, int axis, int people) const { void* args[] = { &c, &axis, &people }; return CallStatic("ToggleCoOfficial", args, 3); }
        int ListOrders(void* c, void* dst) const { void* args[] = { &c, dst }; return CallStaticValue<int>("ListOrders", args, 2); }
        void* OrderLine(void* c, void* s) const { void* args[] = { &c, &s }; return CallStatic("OrderLine", args, 2); }
        void* OrderProgress(void* s) const { void* args[] = { &s }; return CallStatic("OrderProgress", args, 1); }
        void* CallOff(void* c, int people, int axis) const { void* args[] = { &c, &people, &axis }; return CallStatic("CallOff", args, 3); }
        void* BillOf(void* c, int axis) const { void* args[] = { &c, &axis }; return CallStatic("BillOf", args, 2); }
        void* ToggleConsecration(void* c, int owner, void* stateTiles, bool lift) const { void* args[] = { &c, &owner, stateTiles, &lift }; return CallStatic("ToggleConsecration", args, 4); }
        int PackGroup(int groupId, int axis) const { void* args[] = { &groupId, &axis }; return CallStaticValue<int>("PackGroup", args, 2); }
        void UnpackGroup(int arg, int& groupId, int& axis) const { void* args[] = { &arg, &groupId, &axis }; CallStatic("UnpackGroup", args, 3); }
        void* QuickOrders() const { return ReadStaticField<void*>("QuickOrders"); }
    };
}
