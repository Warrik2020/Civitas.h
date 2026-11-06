#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class LeaderCreationPanel : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit LeaderCreationPanel(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "LeaderCreationPanel") {}
    public:
        bool Open(int nationId, void* onCrowned) const { void* args[] = { &nationId, onCrowned }; return CallStaticValue<bool>("Open", args, 2); }
        bool IsEnabled(void* cfg) const { void* args[] = { cfg }; return CallStaticValue<bool>("IsEnabled", args, 1); }
        int index() const { return ReadField<int>("index"); }
        void SetIndex(int value) const { WriteField<int>("index", value); }
        void* face() const { return ReadField<void*>("face"); }
        void SetFace(void* value) const { WriteField<void*>("face", value); }
        void* name() const { return ReadField<void*>("name"); }
        void SetName(void* value) const { WriteField<void*>("name", value); }
        void* rt() const { return ReadField<void*>("rt"); }
        void SetRt(void* value) const { WriteField<void*>("rt", value); }
        void* label() const { return ReadField<void*>("label"); }
        void SetLabel(void* value) const { WriteField<void*>("label", value); }
        int index() const { return ReadField<int>("index"); }
        void SetIndex(int value) const { WriteField<int>("index", value); }
        void* face() const { return ReadField<void*>("face"); }
        void SetFace(void* value) const { WriteField<void*>("face", value); }
        void* group() const { return ReadField<void*>("group"); }
        void SetGroup(void* value) const { WriteField<void*>("group", value); }
        void* tick() const { return ReadField<void*>("tick"); }
        void SetTick(void* value) const { WriteField<void*>("tick", value); }
        void* name() const { return ReadField<void*>("name"); }
        void SetName(void* value) const { WriteField<void*>("name", value); }
        void* cost() const { return ReadField<void*>("cost"); }
        void SetCost(void* value) const { WriteField<void*>("cost", value); }
        void* line() const { return ReadField<void*>("line"); }
        void SetLine(void* value) const { WriteField<void*>("line", value); }
        void* effects() const { return ReadField<void*>("effects"); }
        void SetEffects(void* value) const { WriteField<void*>("effects", value); }
    };
}
