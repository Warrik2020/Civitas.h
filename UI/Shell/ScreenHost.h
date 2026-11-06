#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::UI::Shell
{
    class ScreenHost : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit ScreenHost(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI.Shell", "ScreenHost") {}
    public:
        bool IsOpen(int s) const { void* args[] = { &s }; return CallStaticValue<bool>("IsOpen", args, 1); }
        void Define(int screen, const char* title, void* glyph, void* pages) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(title ? title : "") : nullptr; void* args[] = { &screen, managed_1, glyph, pages }; CallStatic("Define", args, 4); }
        void Define(int screen, const char* title, void* glyph, float width, void* pages) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(title ? title : "") : nullptr; void* args[] = { &screen, managed_1, glyph, &width, pages }; CallStatic("Define", args, 5); }
        bool Defined(int s) const { void* args[] = { &s }; return CallStaticValue<bool>("Defined", args, 1); }
        void Toggle(int s) const { void* args[] = { &s }; CallStatic("Toggle", args, 1); }
        void Open(int s, int tab = 0) const { void* args[] = { &s, &tab }; CallStatic("Open", args, 2); }
        void CloseAll() const { CallStatic("CloseAll", nullptr, 0); }
        bool Find(void* match, int& screen, int& tab) const { void* args[] = { match, &screen, &tab }; return CallStaticValue<bool>("Find", args, 3); }
        bool Hosts(void* window) const { void* args[] = { window }; return CallStaticValue<bool>("Hosts", args, 1); }
        void* title() const { return ReadField<void*>("title"); }
        void SetTitle(void* value) const { WriteField<void*>("title", value); }
        void* glyph() const { return ReadField<void*>("glyph"); }
        void SetGlyph(void* value) const { WriteField<void*>("glyph", value); }
        float width() const { return ReadField<float>("width"); }
        void SetWidth(float value) const { WriteField<float>("width", value); }
        void* pages() const { return ReadField<void*>("pages"); }
        void SetPages(void* value) const { WriteField<void*>("pages", value); }
    };
}
