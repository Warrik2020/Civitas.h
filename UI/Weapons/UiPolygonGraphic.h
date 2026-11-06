#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::UI::Weapons
{
    class UiPolygonGraphic : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit UiPolygonGraphic(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI.Weapons", "UiPolygonGraphic") {}
    public:
        void Clear() const { Call("Clear", nullptr, 0); }
        void AddShape(void* pts, void* fill, void* outline, float outlineWidth, bool blendOnce = false) const { void* args[] = { pts, fill, outline, &outlineWidth, &blendOnce }; Call("AddShape", args, 5); }
        void AddLine(void* a, void* b, void* color, float width) const { void* args[] = { a, b, color, &width }; Call("AddLine", args, 4); }
        void AddHandle(void* pos, float size, void* color, bool hollow = false) const { void* args[] = { pos, &size, color, &hollow }; Call("AddHandle", args, 4); }
        void Commit() const { Call("Commit", nullptr, 0); }
        void* pts() const { return ReadField<void*>("pts"); }
        void SetPts(void* value) const { WriteField<void*>("pts", value); }
        void* fill() const { return ReadField<void*>("fill"); }
        void SetFill(void* value) const { WriteField<void*>("fill", value); }
        void* outline() const { return ReadField<void*>("outline"); }
        void SetOutline(void* value) const { WriteField<void*>("outline", value); }
        float outlineWidth() const { return ReadField<float>("outlineWidth"); }
        void SetOutlineWidth(float value) const { WriteField<float>("outlineWidth", value); }
        bool blendOnce() const { return ReadField<bool>("blendOnce"); }
        void SetBlendOnce(bool value) const { WriteField<bool>("blendOnce", value); }
        void* pos() const { return ReadField<void*>("pos"); }
        void SetPos(void* value) const { WriteField<void*>("pos", value); }
        float size() const { return ReadField<float>("size"); }
        void SetSize(float value) const { WriteField<float>("size", value); }
        void* color() const { return ReadField<void*>("color"); }
        void SetColor(void* value) const { WriteField<void*>("color", value); }
        bool hollow() const { return ReadField<bool>("hollow"); }
        void SetHollow(bool value) const { WriteField<bool>("hollow", value); }
    };
}
