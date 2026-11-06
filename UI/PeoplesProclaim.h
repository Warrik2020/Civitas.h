#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class PeoplesProclaim : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit PeoplesProclaim(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "PeoplesProclaim") {}
    public:
        void Candidates(void* c, int axis, void* dst) const { void* args[] = { &c, &axis, dst }; Call("Candidates", args, 3); }
        void* Outlook(void* c, int axis, int groupId, const char* name) const { void* managed_3 = Api() && Api()->NewString ? Api()->NewString(name ? name : "") : nullptr; void* args[] = { &c, &axis, &groupId, managed_3 }; return Call("Outlook", args, 4); }
        void* Proclaim(void* c, int axis, int groupId) const { void* args[] = { &c, &axis, &groupId }; return Call("Proclaim", args, 3); }
        void* BranchTip(void* c, int axis) const { void* args[] = { &c, &axis }; return Call("BranchTip", args, 2); }
        void* FoundBranch(void* c, int axis) const { void* args[] = { &c, &axis }; return Call("FoundBranch", args, 2); }
        int groupId() const { return ReadField<int>("groupId"); }
        void SetGroupId(int value) const { WriteField<int>("groupId", value); }
        void* name() const { return ReadField<void*>("name"); }
        void SetName(void* value) const { WriteField<void*>("name", value); }
        void* status() const { return ReadField<void*>("status"); }
        void SetStatus(void* value) const { WriteField<void*>("status", value); }
        void* chip() const { return ReadField<void*>("chip"); }
        void SetChip(void* value) const { WriteField<void*>("chip", value); }
        bool own() const { return ReadField<bool>("own"); }
        void SetOwn(bool value) const { WriteField<bool>("own", value); }
        int root() const { return ReadField<int>("root"); }
        void SetRoot(int value) const { WriteField<int>("root", value); }
        int groupId() const { return ReadField<int>("groupId"); }
        void SetGroupId(int value) const { WriteField<int>("groupId", value); }
        int states() const { return ReadField<int>("states"); }
        void SetStates(int value) const { WriteField<int>("states", value); }
        int largestId() const { return ReadField<int>("largestId"); }
        void SetLargestId(int value) const { WriteField<int>("largestId", value); }
        int largestTiles() const { return ReadField<int>("largestTiles"); }
        void SetLargestTiles(int value) const { WriteField<int>("largestTiles", value); }
        int64_t tiles() const { return ReadField<int64_t>("tiles"); }
        void SetTiles(int64_t value) const { WriteField<int64_t>("tiles", value); }
    };
}
