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
        bool IsOpen(int s) const { void* __callArgs[] = { &s }; return CallStaticValue<bool>("IsOpen", __callArgs, 1); }
        void Define(int screen, const char* title, void* glyph, void* pages) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(title ? title : "") : nullptr; void* __callArgs[] = { &screen, managed_1, glyph, pages }; CallStatic("Define", __callArgs, 4); }
        void Define(int screen, const char* title, void* glyph, float width, void* pages) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(title ? title : "") : nullptr; void* __callArgs[] = { &screen, managed_1, glyph, &width, pages }; CallStatic("Define", __callArgs, 5); }
        bool Defined(int s) const { void* __callArgs[] = { &s }; return CallStaticValue<bool>("Defined", __callArgs, 1); }
        void Toggle(int s) const { void* __callArgs[] = { &s }; CallStatic("Toggle", __callArgs, 1); }
        void Open(int s, int tab = 0) const { void* __callArgs[] = { &s, &tab }; CallStatic("Open", __callArgs, 2); }
        void CloseAll() const { CallStatic("CloseAll", nullptr, 0); }
        bool Find(void* match, int& screen, int& tab) const { void* __callArgs[] = { match, &screen, &tab }; return CallStaticValue<bool>("Find", __callArgs, 3); }
        bool Hosts(void* window) const { void* __callArgs[] = { window }; return CallStaticValue<bool>("Hosts", __callArgs, 1); }
    };
}
