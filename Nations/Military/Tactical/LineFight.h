#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Tactical
{
    class LineFight : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit LineFight(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Tactical", "LineFight") {}
    public:
        void SetView(void* v) const { void* args[] = { &v }; Call("SetView", args, 1); }
        float CounterScale(void* v) const { void* args[] = { &v }; return CallStaticValue<float>("CounterScale", args, 1); }
        void EmitGround(void* m, void* v, void* white) const { void* args[] = { m, &v, white }; Call("EmitGround", args, 3); }
        float TintReach(void* v) const { void* args[] = { &v }; return CallStaticValue<float>("TintReach", args, 1); }
        void PaintTint(void* px, int w, int h, void* area, float reach) const { void* args[] = { px, &w, &h, area, &reach }; Call("PaintTint", args, 5); }
        void EmitScars(void* m, void* v) const { void* args[] = { m, &v }; Call("EmitScars", args, 2); }
        void* DrawPos(void* b) const { void* args[] = { b }; return Call("DrawPos", args, 1); }
        void* CounterHalf(void* v) const { void* args[] = { &v }; return CallStatic("CounterHalf", args, 1); }
        bool Merged(void* v) const { void* args[] = { &v }; return CallStaticValue<bool>("Merged", args, 1); }
        bool MemberDrawPos(int mi, void* c) const { void* args[] = { &mi, &c }; return CallValue<bool>("MemberDrawPos", args, 2); }
        void EmitUnits(void* m, void* v, void* cells, void* white, void* selected, void* own, int hover = -1) const { void* args[] = { m, &v, cells, white, selected, own, &hover }; Call("EmitUnits", args, 7); }
        void EmitBox(void* m, void* v, void* white, void* a, void* b, void* c, void* d) const { void* args[] = { m, &v, white, a, b, c, d }; CallStatic("EmitBox", args, 7); }
        float FxGrow(void* v) const { void* args[] = { &v }; return CallStaticValue<float>("FxGrow", args, 1); }
        void EmitSmoke(void* m, void* v) const { void* args[] = { m, &v }; Call("EmitSmoke", args, 2); }
        void EmitAir(void* m, void* v) const { void* args[] = { m, &v }; Call("EmitAir", args, 2); }
        void StepLeaving(float dt) const { void* args[] = { &dt }; Call("StepLeaving", args, 1); }
        void StepVisual(float dt) const { void* args[] = { &dt }; Call("StepVisual", args, 1); }
        void GetCrater(int i, void* pos, float& size) const { void* args[] = { &i, &pos, &size }; Call("GetCrater", args, 3); }
        bool SideAt(void* p, float maxDist, int& side) const { void* args[] = { p, &maxDist, &side }; return CallValue<bool>("SideAt", args, 3); }
        bool SideAt(void* p, float maxDist, int& side, float& dist, bool nearTroops = false) const { void* args[] = { p, &maxDist, &side, &dist, &nearTroops }; return CallValue<bool>("SideAt", args, 5); }
        void Withdraw(int mi) const { void* args[] = { &mi }; Call("Withdraw", args, 1); }
        bool Withdrawing(int mi) const { void* args[] = { &mi }; return CallValue<bool>("Withdrawing", args, 1); }
        bool WithdrawnClear(int mi) const { void* args[] = { &mi }; return CallValue<bool>("WithdrawnClear", args, 1); }
        bool AnyEncircled(int mi) const { void* args[] = { &mi }; return CallValue<bool>("AnyEncircled", args, 1); }
        bool Settled(int mi) const { void* args[] = { &mi }; return CallValue<bool>("Settled", args, 1); }
        bool Flanked(int mi) const { void* args[] = { &mi }; return CallValue<bool>("Flanked", args, 1); }
        bool Encircled(void* b) const { void* args[] = { b }; return CallValue<bool>("Encircled", args, 1); }
        bool Moving(void* b) const { void* args[] = { b }; return CallValue<bool>("Moving", args, 1); }
        void Route(void* b, void* into) const { void* args[] = { b, into }; Call("Route", args, 2); }
        void* Toward(void* b) const { void* args[] = { b }; return Call("Toward", args, 1); }
        void Order(int bat, int order) const { void* args[] = { &bat, &order }; Call("Order", args, 2); }
        bool SendTo(void* bats, void* at, float reach, bool& attack) const { void* args[] = { bats, at, &reach, &attack }; return CallValue<bool>("SendTo", args, 4); }
        void BeginFrame() const { Call("BeginFrame", nullptr, 0); }
        void AddFront(void* line) const { void* args[] = { line }; Call("AddFront", args, 1); }
        bool NearestFront(void* p, float reach, int& front, float& s) const { void* args[] = { p, &reach, &front, &s }; return CallValue<bool>("NearestFront", args, 4); }
        int AddMember(void* spec, float reach, float backReach = 0f) const { void* args[] = { &spec, &reach, &backReach }; return CallValue<int>("AddMember", args, 3); }
        void RemoveMember(int mi, bool walkOff = false) const { void* args[] = { &mi, &walkOff }; Call("RemoveMember", args, 2); }
        float MenOf(int mi) const { void* args[] = { &mi }; return CallValue<float>("MenOf", args, 1); }
        float OrgOf(int mi) const { void* args[] = { &mi }; return CallValue<float>("OrgOf", args, 1); }
        void* Centroid(int mi, bool& any) const { void* args[] = { &mi, &any }; return Call("Centroid", args, 2); }
        bool InContact(int mi) const { void* args[] = { &mi }; return CallValue<bool>("InContact", args, 1); }
        bool Routed(int mi) const { void* args[] = { &mi }; return CallValue<bool>("Routed", args, 1); }
        float Pressure(int mi) const { void* args[] = { &mi }; return CallValue<float>("Pressure", args, 1); }
        bool FightingNear(void* p, float reach) const { void* args[] = { p, &reach }; return CallValue<bool>("FightingNear", args, 2); }
        int NationNear(void* p, int side, float reach) const { void* args[] = { p, &side, &reach }; return CallValue<int>("NationNear", args, 3); }
        float DrainDeaths(int mi, int& killerNation) const { void* args[] = { &mi, &killerNation }; return CallValue<float>("DrainDeaths", args, 2); }
        void SetAuto(int mi, bool on) const { void* args[] = { &mi, &on }; Call("SetAuto", args, 2); }
        void Step(float dt) const { void* args[] = { &dt }; Call("Step", args, 1); }
        void Reset(float cell) const { void* args[] = { &cell }; Call("Reset", args, 1); }
        int CellOf(float v) const { void* args[] = { &v }; return CallValue<int>("CellOf", args, 1); }
        void Add(int i, void* p) const { void* args[] = { &i, p }; Call("Add", args, 2); }
        void* At(int cx, int cy) const { void* args[] = { &cx, &cy }; return Call("At", args, 2); }
        float TintAlpha() const { return ReadStaticField<float>("TintAlpha"); }
        float CounterHalfH() const { return ReadStaticField<float>("CounterHalfH"); }
        float CounterAspect() const { return ReadStaticField<float>("CounterAspect"); }
        float CounterFullViewMetres() const { return ReadStaticField<float>("CounterFullViewMetres"); }
        float CounterMinScale() const { return ReadStaticField<float>("CounterMinScale"); }
        float CounterMaxScale() const { return ReadStaticField<float>("CounterMaxScale"); }
        int JagSeed() const { return ReadField<int>("JagSeed"); }
        void SetJagSeed(int value) const { WriteField<int>("JagSeed", value); }
        float MergeViewMetres() const { return ReadStaticField<float>("MergeViewMetres"); }
        float StartRough() const { return ReadField<float>("StartRough"); }
        void SetStartRough(float value) const { WriteField<float>("StartRough", value); }
        float StartHeld() const { return ReadField<float>("StartHeld"); }
        void SetStartHeld(float value) const { WriteField<float>("StartHeld", value); }
        void* Fronts() const { return ReadField<void*>("Fronts"); }
        void* Members() const { return ReadField<void*>("Members"); }
        void* Bats() const { return ReadField<void*>("Bats"); }
        float VisualKeep() const { return ReadField<float>("VisualKeep"); }
        void SetVisualKeep(float value) const { WriteField<float>("VisualKeep", value); }
        void* area() const { return ReadField<void*>("area"); }
        void SetArea(void* value) const { WriteField<void*>("area", value); }
        float mpp() const { return ReadField<float>("mpp"); }
        void SetMpp(float value) const { WriteField<float>("mpp", value); }
        float screenH() const { return ReadField<float>("screenH"); }
        void SetScreenH(float value) const { WriteField<float>("screenH", value); }
        void* right() const { return ReadField<void*>("right"); }
        void SetRight(void* value) const { WriteField<void*>("right", value); }
        void* up() const { return ReadField<void*>("up"); }
        void SetUp(void* value) const { WriteField<void*>("up", value); }
        void* kind() const { return ReadField<void*>("kind"); }
        void SetKind(void* value) const { WriteField<void*>("kind", value); }
        void* pos() const { return ReadField<void*>("pos"); }
        void SetPos(void* value) const { WriteField<void*>("pos", value); }
        void* vel() const { return ReadField<void*>("vel"); }
        void SetVel(void* value) const { WriteField<void*>("vel", value); }
        float age() const { return ReadField<float>("age"); }
        void SetAge(float value) const { WriteField<float>("age", value); }
        float life() const { return ReadField<float>("life"); }
        void SetLife(float value) const { WriteField<float>("life", value); }
        float size0() const { return ReadField<float>("size0"); }
        void SetSize0(float value) const { WriteField<float>("size0", value); }
        float size1() const { return ReadField<float>("size1"); }
        void SetSize1(float value) const { WriteField<float>("size1", value); }
        void* col0() const { return ReadField<void*>("col0"); }
        void SetCol0(void* value) const { WriteField<void*>("col0", value); }
        void* col1() const { return ReadField<void*>("col1"); }
        void SetCol1(void* value) const { WriteField<void*>("col1", value); }
        void* pos() const { return ReadField<void*>("pos"); }
        void SetPos(void* value) const { WriteField<void*>("pos", value); }
        float size() const { return ReadField<float>("size"); }
        void SetSize(float value) const { WriteField<float>("size", value); }
        float age() const { return ReadField<float>("age"); }
        void SetAge(float value) const { WriteField<float>("age", value); }
        void* pos() const { return ReadField<void*>("pos"); }
        void SetPos(void* value) const { WriteField<void*>("pos", value); }
        float age() const { return ReadField<float>("age"); }
        void SetAge(float value) const { WriteField<float>("age", value); }
        float life() const { return ReadField<float>("life"); }
        void SetLife(float value) const { WriteField<float>("life", value); }
        float smokeIn() const { return ReadField<float>("smokeIn"); }
        void SetSmokeIn(float value) const { WriteField<float>("smokeIn", value); }
        float phase() const { return ReadField<float>("phase"); }
        void SetPhase(float value) const { WriteField<float>("phase", value); }
        void* line() const { return ReadField<void*>("line"); }
        void SetLine(void* value) const { WriteField<void*>("line", value); }
        float resampleIn() const { return ReadField<float>("resampleIn"); }
        void SetResampleIn(float value) const { WriteField<float>("resampleIn", value); }
        float phase() const { return ReadField<float>("phase"); }
        void SetPhase(float value) const { WriteField<float>("phase", value); }
        void* active() const { return ReadField<void*>("active"); }
        void* contest() const { return ReadField<void*>("contest"); }
        float contestSum() const { return ReadField<float>("contestSum"); }
        void SetContestSum(float value) const { WriteField<float>("contestSum", value); }
        void* contestCdf() const { return ReadField<void*>("contestCdf"); }
        void SetContestCdf(void* value) const { WriteField<void*>("contestCdf", value); }
        float shotsOwed() const { return ReadField<float>("shotsOwed"); }
        void SetShotsOwed(float value) const { WriteField<float>("shotsOwed", value); }
        void* onLine() const { return ReadField<void*>("onLine"); }
        float contested() const { return ReadField<float>("contested"); }
        void SetContested(float value) const { WriteField<float>("contested", value); }
        int pressLo() const { return ReadField<int>("pressLo"); }
        void SetPressLo(int value) const { WriteField<int>("pressLo", value); }
        int pressHi() const { return ReadField<int>("pressHi"); }
        void SetPressHi(int value) const { WriteField<int>("pressHi", value); }
        bool moved() const { return ReadField<bool>("moved"); }
        void SetMoved(bool value) const { WriteField<bool>("moved", value); }
        void* shove0() const { return ReadField<void*>("shove0"); }
        void SetShove0(void* value) const { WriteField<void*>("shove0", value); }
        void* shove1() const { return ReadField<void*>("shove1"); }
        void SetShove1(void* value) const { WriteField<void*>("shove1", value); }
        bool pocket() const { return ReadField<bool>("pocket"); }
        void SetPocket(bool value) const { WriteField<bool>("pocket", value); }
        int inside() const { return ReadField<int>("inside"); }
        void SetInside(int value) const { WriteField<int>("inside", value); }
        float radius() const { return ReadField<float>("radius"); }
        void SetRadius(float value) const { WriteField<float>("radius", value); }
        void* neck() const { return ReadField<void*>("neck"); }
        void SetNeck(void* value) const { WriteField<void*>("neck", value); }
        void* reach() const { return ReadField<void*>("reach"); }
        void SetReach(void* value) const { WriteField<void*>("reach", value); }
        bool gone() const { return ReadField<bool>("gone"); }
        void SetGone(bool value) const { WriteField<bool>("gone", value); }
        void* attackIn() const { return ReadField<void*>("attackIn"); }
        float drift() const { return ReadField<float>("drift"); }
        void SetDrift(float value) const { WriteField<float>("drift", value); }
        int driftLo() const { return ReadField<int>("driftLo"); }
        void SetDriftLo(int value) const { WriteField<int>("driftLo", value); }
        int driftHi() const { return ReadField<int>("driftHi"); }
        void SetDriftHi(int value) const { WriteField<int>("driftHi", value); }
        void* spec() const { return ReadField<void*>("spec"); }
        void SetSpec(void* value) const { WriteField<void*>("spec", value); }
        void* bats() const { return ReadField<void*>("bats"); }
        bool gone() const { return ReadField<bool>("gone"); }
        void SetGone(bool value) const { WriteField<bool>("gone", value); }
        float contactSeconds() const { return ReadField<float>("contactSeconds"); }
        void SetContactSeconds(float value) const { WriteField<float>("contactSeconds", value); }
        float deaths() const { return ReadField<float>("deaths"); }
        void SetDeaths(float value) const { WriteField<float>("deaths", value); }
        void* spawnCentroid() const { return ReadField<void*>("spawnCentroid"); }
        void SetSpawnCentroid(void* value) const { WriteField<void*>("spawnCentroid", value); }
        bool auto_() const { return ReadField<bool>("auto"); }
        void SetAuto(bool value) const { WriteField<bool>("auto", value); }
        bool ai() const { return ReadField<bool>("ai"); }
        void SetAi(bool value) const { WriteField<bool>("ai", value); }
        bool withdrawing() const { return ReadField<bool>("withdrawing"); }
        void SetWithdrawing(bool value) const { WriteField<bool>("withdrawing", value); }
        float fireNear() const { return ReadField<float>("fireNear"); }
        void SetFireNear(float value) const { WriteField<float>("fireNear", value); }
        float fireWidth() const { return ReadField<float>("fireWidth"); }
        void SetFireWidth(float value) const { WriteField<float>("fireWidth", value); }
        int id() const { return ReadField<int>("id"); }
        void SetId(int value) const { WriteField<int>("id", value); }
        int member() const { return ReadField<int>("member"); }
        void SetMember(int value) const { WriteField<int>("member", value); }
        int side() const { return ReadField<int>("side"); }
        void SetSide(int value) const { WriteField<int>("side", value); }
        int type() const { return ReadField<int>("type"); }
        void SetType(int value) const { WriteField<int>("type", value); }
        int front() const { return ReadField<int>("front"); }
        void SetFront(int value) const { WriteField<int>("front", value); }
        float men() const { return ReadField<float>("men"); }
        void SetMen(float value) const { WriteField<float>("men", value); }
        float menFull() const { return ReadField<float>("menFull"); }
        void SetMenFull(float value) const { WriteField<float>("menFull", value); }
        float org() const { return ReadField<float>("org"); }
        void SetOrg(float value) const { WriteField<float>("org", value); }
        float s() const { return ReadField<float>("s"); }
        void SetS(float value) const { WriteField<float>("s", value); }
        float nearS() const { return ReadField<float>("nearS"); }
        void SetNearS(float value) const { WriteField<float>("nearS", value); }
        float aimS() const { return ReadField<float>("aimS"); }
        void SetAimS(float value) const { WriteField<float>("aimS", value); }
        float aimIn() const { return ReadField<float>("aimIn"); }
        void SetAimIn(float value) const { WriteField<float>("aimIn", value); }
        void* goal() const { return ReadField<void*>("goal"); }
        void SetGoal(void* value) const { WriteField<void*>("goal", value); }
        bool hasGoal() const { return ReadField<bool>("hasGoal"); }
        void SetHasGoal(bool value) const { WriteField<bool>("hasGoal", value); }
        bool onLine() const { return ReadField<bool>("onLine"); }
        void SetOnLine(bool value) const { WriteField<bool>("onLine", value); }
        bool broken() const { return ReadField<bool>("broken"); }
        void SetBroken(bool value) const { WriteField<bool>("broken", value); }
        bool gone() const { return ReadField<bool>("gone"); }
        void SetGone(bool value) const { WriteField<bool>("gone", value); }
        bool arrived() const { return ReadField<bool>("arrived"); }
        void SetArrived(bool value) const { WriteField<bool>("arrived", value); }
        int order() const { return ReadField<int>("order"); }
        void SetOrder(int value) const { WriteField<int>("order", value); }
        void* pos() const { return ReadField<void*>("pos"); }
        void SetPos(void* value) const { WriteField<void*>("pos", value); }
        void* prev() const { return ReadField<void*>("prev"); }
        void SetPrev(void* value) const { WriteField<void*>("prev", value); }
        float rearDepth() const { return ReadField<float>("rearDepth"); }
        void SetRearDepth(float value) const { WriteField<float>("rearDepth", value); }
        float dig() const { return ReadField<float>("dig"); }
        void SetDig(float value) const { WriteField<float>("dig", value); }
        float fireIn() const { return ReadField<float>("fireIn"); }
        void SetFireIn(float value) const { WriteField<float>("fireIn", value); }
        float kick() const { return ReadField<float>("kick"); }
        void SetKick(float value) const { WriteField<float>("kick", value); }
        float attackRest() const { return ReadField<float>("attackRest"); }
        void SetAttackRest(float value) const { WriteField<float>("attackRest", value); }
        float hitFlash() const { return ReadField<float>("hitFlash"); }
        void SetHitFlash(float value) const { WriteField<float>("hitFlash", value); }
        int burst() const { return ReadField<int>("burst"); }
        void SetBurst(int value) const { WriteField<int>("burst", value); }
        float foe() const { return ReadField<float>("foe"); }
        void SetFoe(float value) const { WriteField<float>("foe", value); }
        float own() const { return ReadField<float>("own"); }
        void SetOwn(float value) const { WriteField<float>("own", value); }
        float ratio() const { return ReadField<float>("ratio"); }
        void SetRatio(float value) const { WriteField<float>("ratio", value); }
        float outnumbered() const { return ReadField<float>("outnumbered"); }
        void SetOutnumbered(float value) const { WriteField<float>("outnumbered", value); }
        int foeNation() const { return ReadField<int>("foeNation"); }
        void SetFoeNation(int value) const { WriteField<int>("foeNation", value); }
        bool contact() const { return ReadField<bool>("contact"); }
        void SetContact(bool value) const { WriteField<bool>("contact", value); }
        int ahead() const { return ReadField<int>("ahead"); }
        void SetAhead(int value) const { WriteField<int>("ahead", value); }
        float aheadGap() const { return ReadField<float>("aheadGap"); }
        void SetAheadGap(float value) const { WriteField<float>("aheadGap", value); }
        bool leaving() const { return ReadField<bool>("leaving"); }
        void SetLeaving(bool value) const { WriteField<bool>("leaving", value); }
        float fade() const { return ReadField<float>("fade"); }
        void SetFade(float value) const { WriteField<float>("fade", value); }
        void* dustAt() const { return ReadField<void*>("dustAt"); }
        void SetDustAt(void* value) const { WriteField<void*>("dustAt", value); }
        bool dusted() const { return ReadField<bool>("dusted"); }
        void SetDusted(bool value) const { WriteField<bool>("dusted", value); }
        bool aiAttack() const { return ReadField<bool>("aiAttack"); }
        void SetAiAttack(bool value) const { WriteField<bool>("aiAttack", value); }
        float stall() const { return ReadField<float>("stall"); }
        void SetStall(float value) const { WriteField<float>("stall", value); }
        float blocked() const { return ReadField<float>("blocked"); }
        void SetBlocked(float value) const { WriteField<float>("blocked", value); }
        void* attackFrom() const { return ReadField<void*>("attackFrom"); }
        void SetAttackFrom(void* value) const { WriteField<void*>("attackFrom", value); }
        bool retreat() const { return ReadField<bool>("retreat"); }
        void SetRetreat(bool value) const { WriteField<bool>("retreat", value); }
        bool breakout() const { return ReadField<bool>("breakout"); }
        void SetBreakout(bool value) const { WriteField<bool>("breakout", value); }
        bool surrendered() const { return ReadField<bool>("surrendered"); }
        void SetSurrendered(bool value) const { WriteField<bool>("surrendered", value); }
        float cutFor() const { return ReadField<float>("cutFor"); }
        void SetCutFor(float value) const { WriteField<float>("cutFor", value); }
        bool flanked() const { return ReadField<bool>("flanked"); }
        void SetFlanked(bool value) const { WriteField<bool>("flanked", value); }
        int target() const { return ReadField<int>("target"); }
        void SetTarget(int value) const { WriteField<int>("target", value); }
        bool foeNear() const { return ReadField<bool>("foeNear"); }
        void SetFoeNear(bool value) const { WriteField<bool>("foeNear", value); }
        void* face() const { return ReadField<void*>("face"); }
        void SetFace(void* value) const { WriteField<void*>("face", value); }
        float settle() const { return ReadField<float>("settle"); }
        void SetSettle(float value) const { WriteField<float>("settle", value); }
        void* rearTo() const { return ReadField<void*>("rearTo"); }
        void SetRearTo(void* value) const { WriteField<void*>("rearTo", value); }
        float rearIn() const { return ReadField<float>("rearIn"); }
        void SetRearIn(float value) const { WriteField<float>("rearIn", value); }
        int reliefBy() const { return ReadField<int>("reliefBy"); }
        void SetReliefBy(int value) const { WriteField<int>("reliefBy", value); }
        int relieving() const { return ReadField<int>("relieving"); }
        void SetRelieving(int value) const { WriteField<int>("relieving", value); }
    };
}
