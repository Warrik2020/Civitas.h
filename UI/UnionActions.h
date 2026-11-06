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
        void* KindName(int kind) const { void* args[] = { &kind }; return CallStatic("KindName", args, 1); }
        void* KindBlurb(int kind) const { void* args[] = { &kind }; return CallStatic("KindBlurb", args, 1); }
        void* SharedLine(int kind) const { void* args[] = { &kind }; return CallStatic("SharedLine", args, 1); }
        void* NotSharedLine() const { return CallStatic("NotSharedLine", nullptr, 0); }
        void* BondLine() const { return CallStatic("BondLine", nullptr, 0); }
        void* RoleWord(void* union_, int id) const { void* args[] = { union_, &id }; return CallStatic("RoleWord", args, 2); }
        void* MoodWord(void* r, void* c) const { void* args[] = { r, c }; return CallStatic("MoodWord", args, 2); }
        void* MoodColor(void* r) const { void* args[] = { r }; return CallStatic("MoodColor", args, 1); }
        float LoyaltyFill(void* r, void* cfg) const { void* args[] = { r, cfg }; return CallStaticValue<float>("LoyaltyFill", args, 2); }
        void* Dur(int ticks, void* c) const { void* args[] = { &ticks, c }; return CallStatic("Dur", args, 2); }
        void* BlockText(int b, void* c, void* deal = nullptr, int otherId = -1) const { void* args[] = { &b, c, deal, &otherId }; return CallStatic("BlockText", args, 4); }
        int SeniorOf(void* deal, void* c) const { void* args[] = { deal, c }; return CallStaticValue<int>("SeniorOf", args, 2); }
        int JoinerOf(void* deal, void* c) const { void* args[] = { deal, c }; return CallStaticValue<int>("JoinerOf", args, 2); }
        void* BestNewDeal(void* c, int otherId, float& odds, int& block) const { void* args[] = { c, &otherId, &odds, &block }; return CallStatic("BestNewDeal", args, 4); }
        void* RowFor(void* c, int otherId, int& mode, void* deal) const { void* args[] = { c, &otherId, &mode, &deal }; return CallStatic("RowFor", args, 4); }
        void* LikelyPartners(void* c, int max = 8) const { void* args[] = { c, &max }; return CallStatic("LikelyPartners", args, 2); }
        void ForgetProspects() const { CallStatic("ForgetProspects", nullptr, 0); }
        void* DealShort(void* deal, void* c) const { void* args[] = { deal, c }; return CallStatic("DealShort", args, 2); }
        void* DivCount(int n) const { void* args[] = { &n }; return CallStatic("DivCount", args, 1); }
        void* OutcomeLine(void* deal, void* c) const { void* args[] = { deal, c }; return CallStatic("OutcomeLine", args, 2); }
        void* ProposalResult(int r, void* deal, void* before) const { void* args[] = { &r, deal, before }; return CallStatic("ProposalResult", args, 3); }
        void* LeaveView(void* c) const { void* args[] = { c }; return CallStatic("LeaveView", args, 1); }
        void* DissolveView(void* c) const { void* args[] = { c }; return CallStatic("DissolveView", args, 1); }
        void* ExpelView(void* c, int memberId) const { void* args[] = { c, &memberId }; return CallStatic("ExpelView", args, 2); }
        void* SubsidyView(void* c, int memberId) const { void* args[] = { c, &memberId }; return CallStatic("SubsidyView", args, 2); }
        void* AutonomyView(void* c, int memberId) const { void* args[] = { c, &memberId }; return CallStatic("AutonomyView", args, 2); }
        void* DoLeave(void* c) const { void* args[] = { c }; return CallStatic("DoLeave", args, 1); }
        void* DoDissolve(void* c) const { void* args[] = { c }; return CallStatic("DoDissolve", args, 1); }
        void* DoExpel(void* c, int memberId) const { void* args[] = { c, &memberId }; return CallStatic("DoExpel", args, 2); }
        void* DoSubsidise(void* c, int memberId) const { void* args[] = { c, &memberId }; return CallStatic("DoSubsidise", args, 2); }
        void* DoGrantAutonomy(void* c, int memberId) const { void* args[] = { c, &memberId }; return CallStatic("DoGrantAutonomy", args, 2); }
        bool DoRenameUnion(void* c, const char* wanted, void* result) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(wanted ? wanted : "") : nullptr; void* args[] = { c, managed_1, &result }; return CallStaticValue<bool>("DoRenameUnion", args, 3); }
        bool DoRenameMember(void* c, int memberId, const char* wanted, void* result) const { void* managed_2 = Api() && Api()->NewString ? Api()->NewString(wanted ? wanted : "") : nullptr; void* args[] = { c, &memberId, managed_2, &result }; return CallStaticValue<bool>("DoRenameMember", args, 4); }
        void* AcceptOffer(void* deal) const { void* args[] = { deal }; return CallStatic("AcceptOffer", args, 1); }
        void* DeclineOffer(void* deal) const { void* args[] = { deal }; return CallStatic("DeclineOffer", args, 1); }
        void ShowOnMap(void* ids) const { void* args[] = { ids }; CallStatic("ShowOnMap", args, 1); }
        void ShowOnMap(int a, int b) const { void* args[] = { &a, &b }; CallStatic("ShowOnMap", args, 2); }
    };
}
