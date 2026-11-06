#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Command
{
    class AiCommander : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit AiCommander(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Command", "AiCommander") {}
    public:
        bool On(int nationId) const { void* args[] = { &nationId }; return CallStaticValue<bool>("On", args, 1); }
        void Forget(int nationId) const { void* args[] = { &nationId }; Call("Forget", args, 1); }
        void Clear() const { Call("Clear", nullptr, 0); }
        void SlotsOf(int nationId, void* into) const { void* args[] = { &nationId, into }; Call("SlotsOf", args, 2); }
        void SectorsOf(int nationId, void* into) const { void* args[] = { &nationId, into }; Call("SectorsOf", args, 2); }
        void ThrustsOf(int nationId, void* into) const { void* args[] = { &nationId, into }; Call("ThrustsOf", args, 2); }
        void* LandsOf(int nationId) const { void* args[] = { &nationId }; return Call("LandsOf", args, 1); }
        void Plan(void* mil, void* n, void* ctx) const { void* args[] = { mil, n, ctx }; Call("Plan", args, 3); }
        bool PlanPart(int part, void* mil, void* n, void* ctx) const { void* args[] = { &part, mil, n, ctx }; return CallValue<bool>("PlanPart", args, 4); }
        void React(void* mil, void* n, void* ctx) const { void* args[] = { mil, n, ctx }; Call("React", args, 3); }
        bool Enabled() const { return ReadStaticField<bool>("Enabled"); }
        void SetEnabled(bool value) const { WriteStaticField<bool>("Enabled", value); }
        int LabelTagBase() const { return ReadStaticField<int>("LabelTagBase"); }
        int ThrustTagBase() const { return ReadStaticField<int>("ThrustTagBase"); }
        bool KeepViews() const { return ReadStaticField<bool>("KeepViews"); }
        void SetKeepViews(bool value) const { WriteStaticField<bool>("KeepViews", value); }
        int MinPlanTicks() const { return ReadStaticField<int>("MinPlanTicks"); }
        void SetMinPlanTicks(int value) const { WriteStaticField<int>("MinPlanTicks", value); }
        int PlanParts() const { return ReadStaticField<int>("PlanParts"); }
        void* pos() const { return ReadField<void*>("pos"); }
        void SetPos(void* value) const { WriteField<void*>("pos", value); }
        void* role() const { return ReadField<void*>("role"); }
        void SetRole(void* value) const { WriteField<void*>("role", value); }
        int sector() const { return ReadField<int>("sector"); }
        void SetSector(int value) const { WriteField<int>("sector", value); }
        int stand() const { return ReadField<int>("stand"); }
        void SetStand(int value) const { WriteField<int>("stand", value); }
        int thrust() const { return ReadField<int>("thrust"); }
        void SetThrust(int value) const { WriteField<int>("thrust", value); }
        int land() const { return ReadField<int>("land"); }
        void SetLand(int value) const { WriteField<int>("land", value); }
        int key() const { return ReadField<int>("key"); }
        void SetKey(int value) const { WriteField<int>("key", value); }
        int anchor() const { return ReadField<int>("anchor"); }
        void SetAnchor(int value) const { WriteField<int>("anchor", value); }
        void* offset() const { return ReadField<void*>("offset"); }
        void SetOffset(void* value) const { WriteField<void*>("offset", value); }
        bool push() const { return ReadField<bool>("push"); }
        void SetPush(bool value) const { WriteField<bool>("push", value); }
        void* aimFrom() const { return ReadField<void*>("aimFrom"); }
        void SetAimFrom(void* value) const { WriteField<void*>("aimFrom", value); }
        void* aimTo() const { return ReadField<void*>("aimTo"); }
        void SetAimTo(void* value) const { WriteField<void*>("aimTo", value); }
        float sq() const { return ReadField<float>("sq"); }
        void SetSq(float value) const { WriteField<float>("sq", value); }
        int slot() const { return ReadField<int>("slot"); }
        void SetSlot(int value) const { WriteField<int>("slot", value); }
        int div() const { return ReadField<int>("div"); }
        void SetDiv(int value) const { WriteField<int>("div", value); }
        void* border() const { return ReadField<void*>("border"); }
        void SetBorder(void* value) const { WriteField<void*>("border", value); }
        void* pos() const { return ReadField<void*>("pos"); }
        void SetPos(void* value) const { WriteField<void*>("pos", value); }
        void* outward() const { return ReadField<void*>("outward"); }
        void SetOutward(void* value) const { WriteField<void*>("outward", value); }
        void* back() const { return ReadField<void*>("back"); }
        void SetBack(void* value) const { WriteField<void*>("back", value); }
        int sector() const { return ReadField<int>("sector"); }
        void SetSector(int value) const { WriteField<int>("sector", value); }
        int land() const { return ReadField<int>("land"); }
        void SetLand(int value) const { WriteField<int>("land", value); }
        float room() const { return ReadField<float>("room"); }
        void SetRoom(float value) const { WriteField<float>("room", value); }
        float enemy() const { return ReadField<float>("enemy"); }
        void SetEnemy(float value) const { WriteField<float>("enemy", value); }
        float pull() const { return ReadField<float>("pull"); }
        void SetPull(float value) const { WriteField<float>("pull", value); }
        void* kind() const { return ReadField<void*>("kind"); }
        void SetKind(void* value) const { WriteField<void*>("kind", value); }
        int foe() const { return ReadField<int>("foe"); }
        void SetFoe(int value) const { WriteField<int>("foe", value); }
        int run() const { return ReadField<int>("run"); }
        void SetRun(int value) const { WriteField<int>("run", value); }
        int first() const { return ReadField<int>("first"); }
        void SetFirst(int value) const { WriteField<int>("first", value); }
        int count() const { return ReadField<int>("count"); }
        void SetCount(int value) const { WriteField<int>("count", value); }
        int land() const { return ReadField<int>("land"); }
        void SetLand(int value) const { WriteField<int>("land", value); }
        int group() const { return ReadField<int>("group"); }
        void SetGroup(int value) const { WriteField<int>("group", value); }
        void* mid() const { return ReadField<void*>("mid"); }
        void SetMid(void* value) const { WriteField<void*>("mid", value); }
        void* outward() const { return ReadField<void*>("outward"); }
        void SetOutward(void* value) const { WriteField<void*>("outward", value); }
        float room() const { return ReadField<float>("room"); }
        void SetRoom(float value) const { WriteField<float>("room", value); }
        float capitalDist() const { return ReadField<float>("capitalDist"); }
        void SetCapitalDist(float value) const { WriteField<float>("capitalDist", value); }
        float enemy() const { return ReadField<float>("enemy"); }
        void SetEnemy(float value) const { WriteField<float>("enemy", value); }
        float own() const { return ReadField<float>("own"); }
        void SetOwn(float value) const { WriteField<float>("own", value); }
        float ownOrg() const { return ReadField<float>("ownOrg"); }
        void SetOwnOrg(float value) const { WriteField<float>("ownOrg", value); }
        float assigned() const { return ReadField<float>("assigned"); }
        void SetAssigned(float value) const { WriteField<float>("assigned", value); }
        float org() const { return ReadField<float>("org"); }
        void SetOrg(float value) const { WriteField<float>("org", value); }
        bool attacked() const { return ReadField<bool>("attacked"); }
        void SetAttacked(bool value) const { WriteField<bool>("attacked", value); }
        bool exposed() const { return ReadField<bool>("exposed"); }
        void SetExposed(bool value) const { WriteField<bool>("exposed", value); }
        bool left() const { return ReadField<bool>("left"); }
        void SetLeft(bool value) const { WriteField<bool>("left", value); }
        bool falling() const { return ReadField<bool>("falling"); }
        void SetFalling(bool value) const { WriteField<bool>("falling", value); }
        bool pressing() const { return ReadField<bool>("pressing"); }
        void SetPressing(bool value) const { WriteField<bool>("pressing", value); }
        int line() const { return ReadField<int>("line"); }
        void SetLine(int value) const { WriteField<int>("line", value); }
        int extra() const { return ReadField<int>("extra"); }
        void SetExtra(int value) const { WriteField<int>("extra", value); }
        int bodies() const { return ReadField<int>("bodies"); }
        void SetBodies(int value) const { WriteField<int>("bodies", value); }
        int ownCount() const { return ReadField<int>("ownCount"); }
        void SetOwnCount(int value) const { WriteField<int>("ownCount", value); }
        void* note() const { return ReadField<void*>("note"); }
        void SetNote(void* value) const { WriteField<void*>("note", value); }
        void* mid() const { return ReadField<void*>("mid"); }
        void SetMid(void* value) const { WriteField<void*>("mid", value); }
        void* kind() const { return ReadField<void*>("kind"); }
        void SetKind(void* value) const { WriteField<void*>("kind", value); }
        int foe() const { return ReadField<int>("foe"); }
        void SetFoe(int value) const { WriteField<int>("foe", value); }
        int attackedTick() const { return ReadField<int>("attackedTick"); }
        void SetAttackedTick(int value) const { WriteField<int>("attackedTick", value); }
        int leftTick() const { return ReadField<int>("leftTick"); }
        void SetLeftTick(int value) const { WriteField<int>("leftTick", value); }
        bool left() const { return ReadField<bool>("left"); }
        void SetLeft(bool value) const { WriteField<bool>("left", value); }
        bool falling() const { return ReadField<bool>("falling"); }
        void SetFalling(bool value) const { WriteField<bool>("falling", value); }
        bool pressing() const { return ReadField<bool>("pressing"); }
        void SetPressing(bool value) const { WriteField<bool>("pressing", value); }
        bool seen() const { return ReadField<bool>("seen"); }
        void SetSeen(bool value) const { WriteField<bool>("seen", value); }
        void* anchor() const { return ReadField<void*>("anchor"); }
        void SetAnchor(void* value) const { WriteField<void*>("anchor", value); }
        void* anchorBack() const { return ReadField<void*>("anchorBack"); }
        void SetAnchorBack(void* value) const { WriteField<void*>("anchorBack", value); }
        int id() const { return ReadField<int>("id"); }
        void SetId(int value) const { WriteField<int>("id", value); }
        int foe() const { return ReadField<int>("foe"); }
        void SetFoe(int value) const { WriteField<int>("foe", value); }
        int cityId() const { return ReadField<int>("cityId"); }
        void SetCityId(int value) const { WriteField<int>("cityId", value); }
        int land() const { return ReadField<int>("land"); }
        void SetLand(int value) const { WriteField<int>("land", value); }
        int size() const { return ReadField<int>("size"); }
        void SetSize(int value) const { WriteField<int>("size", value); }
        int pincer() const { return ReadField<int>("pincer"); }
        void SetPincer(int value) const { WriteField<int>("pincer", value); }
        void* start() const { return ReadField<void*>("start"); }
        void SetStart(void* value) const { WriteField<void*>("start", value); }
        void* back() const { return ReadField<void*>("back"); }
        void SetBack(void* value) const { WriteField<void*>("back", value); }
        void* goal() const { return ReadField<void*>("goal"); }
        void SetGoal(void* value) const { WriteField<void*>("goal", value); }
        void* contact() const { return ReadField<void*>("contact"); }
        void SetContact(void* value) const { WriteField<void*>("contact", value); }
        bool executing() const { return ReadField<bool>("executing"); }
        void SetExecuting(bool value) const { WriteField<bool>("executing", value); }
        int since() const { return ReadField<int>("since"); }
        void SetSince(int value) const { WriteField<int>("since", value); }
        int lastGain() const { return ReadField<int>("lastGain"); }
        void SetLastGain(int value) const { WriteField<int>("lastGain", value); }
        float best() const { return ReadField<float>("best"); }
        void SetBest(float value) const { WriteField<float>("best", value); }
        void* members() const { return ReadField<void*>("members"); }
        void* notes() const { return ReadField<void*>("notes"); }
        void* thrusts() const { return ReadField<void*>("thrusts"); }
        bool adopted() const { return ReadField<bool>("adopted"); }
        void SetAdopted(bool value) const { WriteField<bool>("adopted", value); }
        bool planned() const { return ReadField<bool>("planned"); }
        void SetPlanned(bool value) const { WriteField<bool>("planned", value); }
        int nextThrustId() const { return ReadField<int>("nextThrustId"); }
        void SetNextThrustId(int value) const { WriteField<int>("nextThrustId", value); }
        int nextPincerId() const { return ReadField<int>("nextPincerId"); }
        void SetNextPincerId(int value) const { WriteField<int>("nextPincerId", value); }
        int lastPlan() const { return ReadField<int>("lastPlan"); }
        void SetLastPlan(int value) const { WriteField<int>("lastPlan", value); }
        void* pincerRest() const { return ReadField<void*>("pincerRest"); }
        void* pincerRestUntil() const { return ReadField<void*>("pincerRestUntil"); }
        void* mid() const { return ReadField<void*>("mid"); }
        void SetMid(void* value) const { WriteField<void*>("mid", value); }
        void* outward() const { return ReadField<void*>("outward"); }
        void SetOutward(void* value) const { WriteField<void*>("outward", value); }
        int foe() const { return ReadField<int>("foe"); }
        void SetFoe(int value) const { WriteField<int>("foe", value); }
        int stands() const { return ReadField<int>("stands"); }
        void SetStands(int value) const { WriteField<int>("stands", value); }
        int line() const { return ReadField<int>("line"); }
        void SetLine(int value) const { WriteField<int>("line", value); }
        int extra() const { return ReadField<int>("extra"); }
        void SetExtra(int value) const { WriteField<int>("extra", value); }
        float enemy() const { return ReadField<float>("enemy"); }
        void SetEnemy(float value) const { WriteField<float>("enemy", value); }
        float own() const { return ReadField<float>("own"); }
        void SetOwn(float value) const { WriteField<float>("own", value); }
        float assigned() const { return ReadField<float>("assigned"); }
        void SetAssigned(float value) const { WriteField<float>("assigned", value); }
        float room() const { return ReadField<float>("room"); }
        void SetRoom(float value) const { WriteField<float>("room", value); }
        bool war() const { return ReadField<bool>("war"); }
        void SetWar(bool value) const { WriteField<bool>("war", value); }
        bool prep() const { return ReadField<bool>("prep"); }
        void SetPrep(bool value) const { WriteField<bool>("prep", value); }
        bool guard() const { return ReadField<bool>("guard"); }
        void SetGuard(bool value) const { WriteField<bool>("guard", value); }
        bool attacked() const { return ReadField<bool>("attacked"); }
        void SetAttacked(bool value) const { WriteField<bool>("attacked", value); }
        bool exposed() const { return ReadField<bool>("exposed"); }
        void SetExposed(bool value) const { WriteField<bool>("exposed", value); }
        bool left() const { return ReadField<bool>("left"); }
        void SetLeft(bool value) const { WriteField<bool>("left", value); }
        bool falling() const { return ReadField<bool>("falling"); }
        void SetFalling(bool value) const { WriteField<bool>("falling", value); }
        bool pressing() const { return ReadField<bool>("pressing"); }
        void SetPressing(bool value) const { WriteField<bool>("pressing", value); }
        void* start() const { return ReadField<void*>("start"); }
        void SetStart(void* value) const { WriteField<void*>("start", value); }
        void* goal() const { return ReadField<void*>("goal"); }
        void SetGoal(void* value) const { WriteField<void*>("goal", value); }
        void* contact() const { return ReadField<void*>("contact"); }
        void SetContact(void* value) const { WriteField<void*>("contact", value); }
        int foe() const { return ReadField<int>("foe"); }
        void SetFoe(int value) const { WriteField<int>("foe", value); }
        int cityId() const { return ReadField<int>("cityId"); }
        void SetCityId(int value) const { WriteField<int>("cityId", value); }
        int size() const { return ReadField<int>("size"); }
        void SetSize(int value) const { WriteField<int>("size", value); }
        int members() const { return ReadField<int>("members"); }
        void SetMembers(int value) const { WriteField<int>("members", value); }
        int pincer() const { return ReadField<int>("pincer"); }
        void SetPincer(int value) const { WriteField<int>("pincer", value); }
        bool executing() const { return ReadField<bool>("executing"); }
        void SetExecuting(bool value) const { WriteField<bool>("executing", value); }
        void* pos() const { return ReadField<void*>("pos"); }
        void SetPos(void* value) const { WriteField<void*>("pos", value); }
        void* role() const { return ReadField<void*>("role"); }
        void SetRole(void* value) const { WriteField<void*>("role", value); }
        int divisionId() const { return ReadField<int>("divisionId"); }
        void SetDivisionId(int value) const { WriteField<int>("divisionId", value); }
        int sector() const { return ReadField<int>("sector"); }
        void SetSector(int value) const { WriteField<int>("sector", value); }
    };
}
