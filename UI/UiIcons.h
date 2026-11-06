#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class UiIcons : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit UiIcons(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "UiIcons") {}
    public:
        void* PartGlyph(int partKind) const { void* args[] = { &partKind }; return CallStatic("PartGlyph", args, 1); }
        void* DivisionGlyph(int divisionType) const { void* args[] = { &divisionType }; return CallStatic("DivisionGlyph", args, 1); }
        void* PoolGlyph(int poolKind) const { void* args[] = { &poolKind }; return CallStatic("PoolGlyph", args, 1); }
        void* Get(void* glyph) const { void* args[] = { glyph }; return CallStatic("Get", args, 1); }
        void* Base(void* glyph) const { void* args[] = { glyph }; return CallStatic("Base", args, 1); }
        void* Get(void* glyph, int px) const { void* args[] = { glyph, &px }; return CallStatic("Get", args, 2); }
        void Bind(void* img, void* glyph) const { void* args[] = { img, glyph }; CallStatic("Bind", args, 2); }
        bool IsColour(void* glyph) const { void* args[] = { glyph }; return CallStaticValue<bool>("IsColour", args, 1); }
        bool IsEraArt(void* glyph) const { void* args[] = { glyph }; return CallStaticValue<bool>("IsEraArt", args, 1); }
    };
}
