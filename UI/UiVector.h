#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class UiVector : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit UiVector(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "UiVector") {}
    public:
        void* ClipCircle(float cx, float cy, float r) const { void* __callArgs[] = { &cx, &cy, &r }; return Call("ClipCircle", __callArgs, 3); }
        void* NoClip() const { return Call("NoClip", nullptr, 0); }
        void* Stroke(const char* d, float width, void* color) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(d ? d : "") : nullptr; void* __callArgs[] = { managed_0, &width, color }; return Call("Stroke", __callArgs, 3); }
        void* Fill(const char* d, void* color) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(d ? d : "") : nullptr; void* __callArgs[] = { managed_0, color }; return Call("Fill", __callArgs, 2); }
        void* StrokeCircle(float cx, float cy, float r, float width, void* color) const { void* __callArgs[] = { &cx, &cy, &r, &width, color }; return Call("StrokeCircle", __callArgs, 5); }
        void* FillCircle(float cx, float cy, float r, void* color) const { void* __callArgs[] = { &cx, &cy, &r, color }; return Call("FillCircle", __callArgs, 4); }
        void* StrokeEllipse(float cx, float cy, float rx, float ry, float width, void* color) const { void* __callArgs[] = { &cx, &cy, &rx, &ry, &width, color }; return Call("StrokeEllipse", __callArgs, 6); }
        void* ToSprite(int px, const char* name, bool mipmaps = false) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(name ? name : "") : nullptr; void* __callArgs[] = { &px, managed_1, &mipmaps }; return Call("ToSprite", __callArgs, 3); }
        void* Parse(const char* d) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(d ? d : "") : nullptr; void* __callArgs[] = { managed_0 }; return CallStatic("Parse", __callArgs, 1); }
    };
}
