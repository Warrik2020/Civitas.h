#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class UnionActions : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit UnionActions(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "UnionActions") {}
    public:
        void* KindName(int kind) const { void* __callArgs[] = { &kind }; return CallStatic("KindName", __callArgs, 1); }
        void* KindBlurb(int kind) const { void* __callArgs[] = { &kind }; return CallStatic("KindBlurb", __callArgs, 1); }
        void* SharedLine(int kind) const { void* __callArgs[] = { &kind }; return CallStatic("SharedLine", __callArgs, 1); }
        void* NotSharedLine() const { return CallStatic("NotSharedLine", nullptr, 0); }
        void* BondLine() const { return CallStatic("BondLine", nullptr, 0); }
        void* RoleWord(void* union_, int id) const { void* __callArgs[] = { union_, &id }; return CallStatic("RoleWord", __callArgs, 2); }
        void* MoodWord(void* r, void* c) const { void* __callArgs[] = { r, c }; return CallStatic("MoodWord", __callArgs, 2); }
        void* MoodColor(void* r) const { void* __callArgs[] = { r }; return CallStatic("MoodColor", __callArgs, 1); }
        float LoyaltyFill(void* r, void* cfg) const { void* __callArgs[] = { r, cfg }; return CallStaticValue<float>("LoyaltyFill", __callArgs, 2); }
        void* Dur(int ticks, void* c) const { void* __callArgs[] = { &ticks, c }; return CallStatic("Dur", __callArgs, 2); }
        void* BlockText(int b, void* c, void* deal = nullptr, int otherId = -1) const { void* __callArgs[] = { &b, c, deal, &otherId }; return CallStatic("BlockText", __callArgs, 4); }
        int SeniorOf(void* deal, void* c) const { void* __callArgs[] = { deal, c }; return CallStaticValue<int>("SeniorOf", __callArgs, 2); }
        int JoinerOf(void* deal, void* c) const { void* __callArgs[] = { deal, c }; return CallStaticValue<int>("JoinerOf", __callArgs, 2); }
        void* BestNewDeal(void* c, int otherId, float& odds, int& block) const { void* __callArgs[] = { c, &otherId, &odds, &block }; return CallStatic("BestNewDeal", __callArgs, 4); }
        void* RowFor(void* c, int otherId, int& mode, void* deal) const { void* __callArgs[] = { c, &otherId, &mode, &deal }; return CallStatic("RowFor", __callArgs, 4); }
        void* LikelyPartners(void* c, int max_ = 8) const { void* __callArgs[] = { c, &max_ }; return CallStatic("LikelyPartners", __callArgs, 2); }
        void ForgetProspects() const { CallStatic("ForgetProspects", nullptr, 0); }
        void* DealShort(void* deal, void* c) const { void* __callArgs[] = { deal, c }; return CallStatic("DealShort", __callArgs, 2); }
        void* DivCount(int n) const { void* __callArgs[] = { &n }; return CallStatic("DivCount", __callArgs, 1); }
        void* OutcomeLine(void* deal, void* c) const { void* __callArgs[] = { deal, c }; return CallStatic("OutcomeLine", __callArgs, 2); }
        void* ProposalResult(int r, void* deal, void* before) const { void* __callArgs[] = { &r, deal, before }; return CallStatic("ProposalResult", __callArgs, 3); }
        void* LeaveView(void* c) const { void* __callArgs[] = { c }; return CallStatic("LeaveView", __callArgs, 1); }
        void* DissolveView(void* c) const { void* __callArgs[] = { c }; return CallStatic("DissolveView", __callArgs, 1); }
        void* ExpelView(void* c, int memberId) const { void* __callArgs[] = { c, &memberId }; return CallStatic("ExpelView", __callArgs, 2); }
        void* SubsidyView(void* c, int memberId) const { void* __callArgs[] = { c, &memberId }; return CallStatic("SubsidyView", __callArgs, 2); }
        void* AutonomyView(void* c, int memberId) const { void* __callArgs[] = { c, &memberId }; return CallStatic("AutonomyView", __callArgs, 2); }
        void* DoLeave(void* c) const { void* __callArgs[] = { c }; return CallStatic("DoLeave", __callArgs, 1); }
        void* DoDissolve(void* c) const { void* __callArgs[] = { c }; return CallStatic("DoDissolve", __callArgs, 1); }
        void* DoExpel(void* c, int memberId) const { void* __callArgs[] = { c, &memberId }; return CallStatic("DoExpel", __callArgs, 2); }
        void* DoSubsidise(void* c, int memberId) const { void* __callArgs[] = { c, &memberId }; return CallStatic("DoSubsidise", __callArgs, 2); }
        void* DoGrantAutonomy(void* c, int memberId) const { void* __callArgs[] = { c, &memberId }; return CallStatic("DoGrantAutonomy", __callArgs, 2); }
        bool DoRenameUnion(void* c, const char* wanted, void* result) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(wanted ? wanted : "") : nullptr; void* __callArgs[] = { c, managed_1, &result }; return CallStaticValue<bool>("DoRenameUnion", __callArgs, 3); }
        bool DoRenameMember(void* c, int memberId, const char* wanted, void* result) const { void* managed_2 = Api() && Api()->NewString ? Api()->NewString(wanted ? wanted : "") : nullptr; void* __callArgs[] = { c, &memberId, managed_2, &result }; return CallStaticValue<bool>("DoRenameMember", __callArgs, 4); }
        void* AcceptOffer(void* deal) const { void* __callArgs[] = { deal }; return CallStatic("AcceptOffer", __callArgs, 1); }
        void* DeclineOffer(void* deal) const { void* __callArgs[] = { deal }; return CallStatic("DeclineOffer", __callArgs, 1); }
        void ShowOnMap(void* ids) const { void* __callArgs[] = { ids }; CallStatic("ShowOnMap", __callArgs, 1); }
        void ShowOnMap(int a, int b) const { void* __callArgs[] = { &a, &b }; CallStatic("ShowOnMap", __callArgs, 2); }
    };
}
