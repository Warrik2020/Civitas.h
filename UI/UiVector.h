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
        void* ClipCircle(float cx, float cy, float r) const { void* args[] = { &cx, &cy, &r }; return Call("ClipCircle", args, 3); }
        void* NoClip() const { return Call("NoClip", nullptr, 0); }
        void* Stroke(const char* d, float width, void* color) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(d ? d : "") : nullptr; void* args[] = { managed_0, &width, color }; return Call("Stroke", args, 3); }
        void* Fill(const char* d, void* color) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(d ? d : "") : nullptr; void* args[] = { managed_0, color }; return Call("Fill", args, 2); }
        void* StrokeCircle(float cx, float cy, float r, float width, void* color) const { void* args[] = { &cx, &cy, &r, &width, color }; return Call("StrokeCircle", args, 5); }
        void* FillCircle(float cx, float cy, float r, void* color) const { void* args[] = { &cx, &cy, &r, color }; return Call("FillCircle", args, 4); }
        void* StrokeEllipse(float cx, float cy, float rx, float ry, float width, void* color) const { void* args[] = { &cx, &cy, &rx, &ry, &width, color }; return Call("StrokeEllipse", args, 6); }
        void* ToSprite(int px, const char* name, bool mipmaps = false) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(name ? name : "") : nullptr; void* args[] = { &px, managed_1, &mipmaps }; return Call("ToSprite", args, 3); }
        void* Parse(const char* d) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(d ? d : "") : nullptr; void* args[] = { managed_0 }; return CallStatic("Parse", args, 1); }
        void* a() const { return ReadField<void*>("a"); }
        void SetA(void* value) const { WriteField<void*>("a", value); }
        void* b() const { return ReadField<void*>("b"); }
        void SetB(void* value) const { WriteField<void*>("b", value); }
        void* polys() const { return ReadField<void*>("polys"); }
        void SetPolys(void* value) const { WriteField<void*>("polys", value); }
        bool fill() const { return ReadField<bool>("fill"); }
        void SetFill(bool value) const { WriteField<bool>("fill", value); }
        bool stroke() const { return ReadField<bool>("stroke"); }
        void SetStroke(bool value) const { WriteField<bool>("stroke", value); }
        float width() const { return ReadField<float>("width"); }
        void SetWidth(float value) const { WriteField<float>("width", value); }
        void* color() const { return ReadField<void*>("color"); }
        void SetColor(void* value) const { WriteField<void*>("color", value); }
        void* clip() const { return ReadField<void*>("clip"); }
        void SetClip(void* value) const { WriteField<void*>("clip", value); }
    };
}
