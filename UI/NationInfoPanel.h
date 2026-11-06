#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class NationInfoPanel : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit NationInfoPanel(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "NationInfoPanel") {}
    public:
        bool CanOpenFor(int nationId) const { void* args[] = { &nationId }; return CallStaticValue<bool>("CanOpenFor", args, 1); }
        void* OpenFor(void** args = nullptr, int count = 0) const { return CallStatic("OpenFor", args, count); }
        void CloseDocked() const { Call("CloseDocked", nullptr, 0); }
        void* root() const { return ReadField<void*>("root"); }
        void SetRoot(void* value) const { WriteField<void*>("root", value); }
        void* chip() const { return ReadField<void*>("chip"); }
        void SetChip(void* value) const { WriteField<void*>("chip", value); }
        void* button() const { return ReadField<void*>("button"); }
        void SetButton(void* value) const { WriteField<void*>("button", value); }
        void* face() const { return ReadField<void*>("face"); }
        void SetFace(void* value) const { WriteField<void*>("face", value); }
        void* wash() const { return ReadField<void*>("wash"); }
        void SetWash(void* value) const { WriteField<void*>("wash", value); }
        void* icon() const { return ReadField<void*>("icon"); }
        void SetIcon(void* value) const { WriteField<void*>("icon", value); }
        void* label() const { return ReadField<void*>("label"); }
        void SetLabel(void* value) const { WriteField<void*>("label", value); }
        void* value() const { return ReadField<void*>("value"); }
        void SetValue(void* value) const { WriteField<void*>("value", value); }
        void* chipLabel() const { return ReadField<void*>("chipLabel"); }
        void SetChipLabel(void* value) const { WriteField<void*>("chipLabel", value); }
        void* tip() const { return ReadField<void*>("tip"); }
        void SetTip(void* value) const { WriteField<void*>("tip", value); }
        bool seen() const { return ReadField<bool>("seen"); }
        void SetSeen(bool value) const { WriteField<bool>("seen", value); }
        bool parked() const { return ReadField<bool>("parked"); }
        void SetParked(bool value) const { WriteField<bool>("parked", value); }
        void* root() const { return ReadField<void*>("root"); }
        void SetRoot(void* value) const { WriteField<void*>("root", value); }
        void* caption() const { return ReadField<void*>("caption"); }
        void SetCaption(void* value) const { WriteField<void*>("caption", value); }
        void* grid() const { return ReadField<void*>("grid"); }
        void SetGrid(void* value) const { WriteField<void*>("grid", value); }
        int count() const { return ReadField<int>("count"); }
        void SetCount(int value) const { WriteField<int>("count", value); }
        void* root() const { return ReadField<void*>("root"); }
        void SetRoot(void* value) const { WriteField<void*>("root", value); }
        void* button() const { return ReadField<void*>("button"); }
        void SetButton(void* value) const { WriteField<void*>("button", value); }
        void* label() const { return ReadField<void*>("label"); }
        void SetLabel(void* value) const { WriteField<void*>("label", value); }
        void* note() const { return ReadField<void*>("note"); }
        void SetNote(void* value) const { WriteField<void*>("note", value); }
    };
}
