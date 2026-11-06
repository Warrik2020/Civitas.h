#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class IncursionStancePrompt : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit IncursionStancePrompt(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "IncursionStancePrompt") {}
    public:
        int Apply(void* ids, int stance, void* military) const { void* args[] = { ids, &stance, military }; return CallStaticValue<int>("Apply", args, 3); }
        void* StanceNote(void* d, void* internals) const { void* args[] = { d, internals }; return CallStatic("StanceNote", args, 2); }
        int stance() const { return ReadField<int>("stance"); }
        void SetStance(int value) const { WriteField<int>("stance", value); }
        void* wash() const { return ReadField<void*>("wash"); }
        void SetWash(void* value) const { WriteField<void*>("wash", value); }
        void* frame() const { return ReadField<void*>("frame"); }
        void SetFrame(void* value) const { WriteField<void*>("frame", value); }
        void* glyph() const { return ReadField<void*>("glyph"); }
        void SetGlyph(void* value) const { WriteField<void*>("glyph", value); }
        void* label() const { return ReadField<void*>("label"); }
        void SetLabel(void* value) const { WriteField<void*>("label", value); }
        int host() const { return ReadField<int>("host"); }
        void SetHost(int value) const { WriteField<int>("host", value); }
        void* members() const { return ReadField<void*>("members"); }
        void* why() const { return ReadField<void*>("why"); }
        void* go() const { return ReadField<void*>("go"); }
        void SetGo(void* value) const { WriteField<void*>("go", value); }
        void* rt() const { return ReadField<void*>("rt"); }
        void SetRt(void* value) const { WriteField<void*>("rt", value); }
        void* head() const { return ReadField<void*>("head"); }
        void SetHead(void* value) const { WriteField<void*>("head", value); }
        void* buttons() const { return ReadField<void*>("buttons"); }
        bool placed() const { return ReadField<bool>("placed"); }
        void SetPlaced(bool value) const { WriteField<bool>("placed", value); }
    };
}
