#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class ScenarioEditorPanel : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit ScenarioEditorPanel(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "ScenarioEditorPanel") {}
    public:
        void SetVisible(bool visible) const { void* args[] = { &visible }; Call("SetVisible", args, 1); }
        void Set(bool on) const { void* args[] = { &on }; Call("Set", args, 1); }
        void Set(bool on, void* hue) const { void* args[] = { &on, hue }; Call("Set", args, 2); }
        void SetLit(bool lit) const { void* args[] = { &lit }; Call("SetLit", args, 1); }
        void* row() const { return ReadField<void*>("row"); }
        void SetRow(void* value) const { WriteField<void*>("row", value); }
        int otherId() const { return ReadField<int>("otherId"); }
        void SetOtherId(int value) const { WriteField<int>("otherId", value); }
        void* opinion() const { return ReadField<void*>("opinion"); }
        void SetOpinion(void* value) const { WriteField<void*>("opinion", value); }
        void* war() const { return ReadField<void*>("war"); }
        void SetWar(void* value) const { WriteField<void*>("war", value); }
        void* ally() const { return ReadField<void*>("ally"); }
        void SetAlly(void* value) const { WriteField<void*>("ally", value); }
        void* pact() const { return ReadField<void*>("pact"); }
        void SetPact(void* value) const { WriteField<void*>("pact", value); }
        void* button() const { return ReadField<void*>("button"); }
        void SetButton(void* value) const { WriteField<void*>("button", value); }
        void* frame() const { return ReadField<void*>("frame"); }
        void SetFrame(void* value) const { WriteField<void*>("frame", value); }
        void* wash() const { return ReadField<void*>("wash"); }
        void SetWash(void* value) const { WriteField<void*>("wash", value); }
        void* label() const { return ReadField<void*>("label"); }
        void SetLabel(void* value) const { WriteField<void*>("label", value); }
        void* glyph() const { return ReadField<void*>("glyph"); }
        void SetGlyph(void* value) const { WriteField<void*>("glyph", value); }
        bool subtle() const { return ReadField<bool>("subtle"); }
        void SetSubtle(bool value) const { WriteField<bool>("subtle", value); }
        void* root() const { return ReadField<void*>("root"); }
        void SetRoot(void* value) const { WriteField<void*>("root", value); }
        void* slot() const { return ReadField<void*>("slot"); }
        void SetSlot(void* value) const { WriteField<void*>("slot", value); }
        void* chip() const { return ReadField<void*>("chip"); }
        void SetChip(void* value) const { WriteField<void*>("chip", value); }
        void* wash() const { return ReadField<void*>("wash"); }
        void SetWash(void* value) const { WriteField<void*>("wash", value); }
        void* name() const { return ReadField<void*>("name"); }
        void SetName(void* value) const { WriteField<void*>("name", value); }
        void* button() const { return ReadField<void*>("button"); }
        void SetButton(void* value) const { WriteField<void*>("button", value); }
        int id() const { return ReadField<int>("id"); }
        void SetId(int value) const { WriteField<int>("id", value); }
        void* key() const { return ReadField<void*>("key"); }
        void SetKey(void* value) const { WriteField<void*>("key", value); }
    };
}
