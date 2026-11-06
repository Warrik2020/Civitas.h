#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::UI::TimeSkip
{
    class LineChartMath : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit LineChartMath(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI.TimeSkip", "LineChartMath") {}
    public:
        void Range(void* values, float baseline, float& min, float& max) const { void* args[] = { values, &baseline, &min, &max }; CallStatic("Range", args, 4); }
        float Map(float v, float min, float max) const { void* args[] = { &v, &min, &max }; return CallStaticValue<float>("Map", args, 3); }
    };
}
